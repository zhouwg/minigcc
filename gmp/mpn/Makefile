#2017-10-28,zhou.weiguo, Houshayu, Shunyi District, Beijing

include ../../make.def

OBJS=fib_table.o mp_bases.o add.o add_1.o add_n.o sub.o sub_1.o sub_n.o cnd_add_n.o cnd_sub_n.o cnd_swap.o neg.o com.o mul_1.o addmul_1.o submul_1.o add_err1_n.o add_err2_n.o add_err3_n.o sub_err1_n.o sub_err2_n.o sub_err3_n.o lshift.o rshift.o dive_1.o diveby3.o divis.o divrem.o divrem_1.o divrem_2.o fib2_ui.o mod_1.o mod_34lsub1.o mode1o.o pre_divrem_1.o pre_mod_1.o dump.o mod_1_1.o mod_1_2.o mod_1_3.o mod_1_4.o lshiftc.o mul.o mul_fft.o mul_n.o sqr.o mul_basecase.o sqr_basecase.o nussbaumer_mul.o mulmid_basecase.o toom42_mulmid.o mulmid_n.o mulmid.o random.o random2.o pow_1.o rootrem.o sqrtrem.o sizeinbase.o get_str.o set_str.o scan0.o scan1.o popcount.o hamdist.o cmp.o zero_p.o perfsqr.o perfpow.o gcd_1.o gcd.o gcdext_1.o gcdext.o gcd_subdiv_step.o gcdext_lehmer.o div_q.o tdiv_qr.o jacbase.o jacobi_2.o jacobi.o get_d.o matrix22_mul.o matrix22_mul1_inverse_vector.o hgcd_matrix.o hgcd2.o hgcd_step.o hgcd_reduce.o hgcd.o hgcd_appr.o hgcd2_jacobi.o hgcd_jacobi.o mullo_n.o mullo_basecase.o sqrlo.o sqrlo_basecase.o toom22_mul.o toom32_mul.o toom42_mul.o toom52_mul.o toom62_mul.o toom33_mul.o toom43_mul.o toom53_mul.o toom54_mul.o toom63_mul.o toom44_mul.o toom6h_mul.o toom6_sqr.o toom8h_mul.o toom8_sqr.o toom_couple_handling.o toom2_sqr.o toom3_sqr.o toom4_sqr.o toom_eval_dgr3_pm1.o toom_eval_dgr3_pm2.o toom_eval_pm1.o toom_eval_pm2.o toom_eval_pm2exp.o toom_eval_pm2rexp.o toom_interpolate_5pts.o toom_interpolate_6pts.o toom_interpolate_7pts.o toom_interpolate_8pts.o toom_interpolate_12pts.o toom_interpolate_16pts.o invertappr.o invert.o binvert.o mulmod_bnm1.o sqrmod_bnm1.o div_qr_1.o div_qr_1n_pi1.o div_qr_2.o div_qr_2n_pi1.o div_qr_2u_pi1.o sbpi1_div_q.o sbpi1_div_qr.o sbpi1_divappr_q.o dcpi1_div_q.o dcpi1_div_qr.o dcpi1_divappr_q.o mu_div_qr.o mu_divappr_q.o mu_div_q.o bdiv_q_1.o sbpi1_bdiv_q.o sbpi1_bdiv_qr.o dcpi1_bdiv_q.o dcpi1_bdiv_qr.o mu_bdiv_q.o mu_bdiv_qr.o bdiv_q.o bdiv_qr.o broot.o brootinv.o bsqrt.o bsqrtinv.o divexact.o bdiv_dbm1c.o redc_1.o redc_2.o redc_n.o powm.o powlo.o sec_powm.o sec_mul.o sec_sqr.o sec_div_qr.o sec_div_r.o sec_pi1_div_qr.o sec_pi1_div_r.o sec_add_1.o sec_sub_1.o sec_invert.o trialdiv.o remove.o and_n.o andn_n.o nand_n.o ior_n.o iorn_n.o nior_n.o xor_n.o xnor_n.o copyi.o copyd.o zero.o sec_tabselect.o comb_tables.o add_n_sub_n.o

all: prebuilt
	$(AR) libmpn.a $(OBJS)
	$(RANLIB) libmpn.a

prebuilt:
	@list='$(OBJS)'; for obj in $$list; do \
	  target=$$obj;\
	  real=`echo $$target | tr '.o' ' '`;\
	  real=`echo $$target | cut -d \. -f 1`;\
	  sym="OPERATION_"$$real;\
	  echo "build $$obj   $(GCC) $(CCFALGS) -std=gnu99 -DHAVE_CONFIG_H -I. -I../mpn -I../../gmp -D$$sym -O2 -c $$real.c -o $$obj";\
	  if [ ! -f $$obj ]; then \
          $(GCC) $(CCFALGS) -std=gnu99 -DHAVE_CONFIG_H -I. -I../mpn -I../../gmp -D$$sym -O2 -c $$real.c -o $$obj; \
      fi;\
	done;


clean:
	rm -f $(OBJS)
	rm -f libmpn.a
