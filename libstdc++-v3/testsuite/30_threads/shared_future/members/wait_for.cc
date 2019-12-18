// { dg-do run { target *-*-freebsd* *-*-dragonfly* *-*-netbsd* *-*-linux* *-*-gnu* *-*-solaris* *-*-cygwin *-*-rtems* *-*-darwin* powerpc-ibm-aix* } }
// { dg-options " -std=gnu++11 -pthread" { target *-*-freebsd* *-*-dragonfly* *-*-netbsd* *-*-linux* *-*-gnu* powerpc-ibm-aix* } }
// { dg-options " -std=gnu++11 -pthreads" { target *-*-solaris* } }
// { dg-options " -std=gnu++11 " { target *-*-cygwin *-*-rtems* *-*-darwin* } }
// { dg-require-cstdint "" }
// { dg-require-gthreads "" }
// { dg-require-atomic-builtins "" }

// Copyright (C) 2009-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.


#include <future>
#include <chrono>
#include <testsuite_hooks.h>

void test01()
{
  bool test __attribute__((unused)) = true;

  std::promise<int> p1;
  std::shared_future<int> f1(p1.get_future());
  std::shared_future<int> f2(f1);

  std::chrono::milliseconds delay(100);

  VERIFY( f1.wait_for(delay) == std::future_status::timeout );
  VERIFY( f2.wait_for(delay) == std::future_status::timeout );

  p1.set_value(1);

  auto before = std::chrono::system_clock::now();
  VERIFY( f1.wait_for(delay) == std::future_status::ready );
  VERIFY( f2.wait_for(delay) == std::future_status::ready );
  VERIFY( std::chrono::system_clock::now() < (before + 2*delay) );
}

int main()
{
  test01();
  return 0;
}
