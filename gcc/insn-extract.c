/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 5021:  /* atomic_xordi */
    case 5020:  /* atomic_ordi */
    case 5019:  /* atomic_anddi */
    case 5018:  /* atomic_xorsi */
    case 5017:  /* atomic_orsi */
    case 5016:  /* atomic_andsi */
    case 5015:  /* atomic_xorhi */
    case 5014:  /* atomic_orhi */
    case 5013:  /* atomic_andhi */
    case 5012:  /* atomic_xorqi */
    case 5011:  /* atomic_orqi */
    case 5010:  /* atomic_andqi */
    case 5009:  /* atomic_subdi */
    case 5008:  /* atomic_subsi */
    case 5007:  /* atomic_subhi */
    case 5006:  /* atomic_subqi */
    case 5005:  /* atomic_adddi */
    case 5004:  /* atomic_addsi */
    case 5003:  /* atomic_addhi */
    case 5002:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5001:  /* atomic_exchangedi */
    case 5000:  /* atomic_exchangesi */
    case 4999:  /* atomic_exchangehi */
    case 4998:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4997:  /* *atomic_fetch_add_cmpdi */
    case 4996:  /* *atomic_fetch_add_cmpsi */
    case 4995:  /* *atomic_fetch_add_cmphi */
    case 4994:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 4993:  /* atomic_fetch_adddi */
    case 4992:  /* atomic_fetch_addsi */
    case 4991:  /* atomic_fetch_addhi */
    case 4990:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4989:  /* atomic_compare_and_swapdi_1 */
    case 4988:  /* atomic_compare_and_swapsi_1 */
    case 4987:  /* atomic_compare_and_swaphi_1 */
    case 4986:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4985:  /* atomic_compare_and_swapti_doubleword */
    case 4984:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4975:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4876:  /* avx512dq_vmfpclassv2df */
    case 4875:  /* avx512dq_vmfpclassv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 4830:  /* avx512vl_compressstorev2df_mask */
    case 4829:  /* avx512vl_compressstorev2di_mask */
    case 4828:  /* avx512vl_compressstorev4sf_mask */
    case 4827:  /* avx512vl_compressstorev4si_mask */
    case 4826:  /* avx512vl_compressstorev4df_mask */
    case 4825:  /* avx512vl_compressstorev4di_mask */
    case 4824:  /* avx512vl_compressstorev8sf_mask */
    case 4823:  /* avx512vl_compressstorev8si_mask */
    case 4822:  /* avx512f_compressstorev8df_mask */
    case 4821:  /* avx512f_compressstorev8di_mask */
    case 4820:  /* avx512f_compressstorev16sf_mask */
    case 4819:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4806:  /* *avx512f_scatterdiv2df */
    case 4805:  /* *avx512f_scatterdiv2df */
    case 4804:  /* *avx512f_scatterdiv2di */
    case 4803:  /* *avx512f_scatterdiv2di */
    case 4802:  /* *avx512f_scatterdiv4sf */
    case 4801:  /* *avx512f_scatterdiv4sf */
    case 4800:  /* *avx512f_scatterdiv4si */
    case 4799:  /* *avx512f_scatterdiv4si */
    case 4798:  /* *avx512f_scatterdiv4df */
    case 4797:  /* *avx512f_scatterdiv4df */
    case 4796:  /* *avx512f_scatterdiv4di */
    case 4795:  /* *avx512f_scatterdiv4di */
    case 4794:  /* *avx512f_scatterdiv8sf */
    case 4793:  /* *avx512f_scatterdiv8sf */
    case 4792:  /* *avx512f_scatterdiv8si */
    case 4791:  /* *avx512f_scatterdiv8si */
    case 4790:  /* *avx512f_scatterdiv8df */
    case 4789:  /* *avx512f_scatterdiv8df */
    case 4788:  /* *avx512f_scatterdiv8di */
    case 4787:  /* *avx512f_scatterdiv8di */
    case 4786:  /* *avx512f_scatterdiv16sf */
    case 4785:  /* *avx512f_scatterdiv16sf */
    case 4784:  /* *avx512f_scatterdiv16si */
    case 4783:  /* *avx512f_scatterdiv16si */
    case 4782:  /* *avx512f_scattersiv2df */
    case 4781:  /* *avx512f_scattersiv2df */
    case 4780:  /* *avx512f_scattersiv2di */
    case 4779:  /* *avx512f_scattersiv2di */
    case 4778:  /* *avx512f_scattersiv4sf */
    case 4777:  /* *avx512f_scattersiv4sf */
    case 4776:  /* *avx512f_scattersiv4si */
    case 4775:  /* *avx512f_scattersiv4si */
    case 4774:  /* *avx512f_scattersiv4df */
    case 4773:  /* *avx512f_scattersiv4df */
    case 4772:  /* *avx512f_scattersiv4di */
    case 4771:  /* *avx512f_scattersiv4di */
    case 4770:  /* *avx512f_scattersiv8sf */
    case 4769:  /* *avx512f_scattersiv8sf */
    case 4768:  /* *avx512f_scattersiv8si */
    case 4767:  /* *avx512f_scattersiv8si */
    case 4766:  /* *avx512f_scattersiv8df */
    case 4765:  /* *avx512f_scattersiv8df */
    case 4764:  /* *avx512f_scattersiv8di */
    case 4763:  /* *avx512f_scattersiv8di */
    case 4762:  /* *avx512f_scattersiv16sf */
    case 4761:  /* *avx512f_scattersiv16sf */
    case 4760:  /* *avx512f_scattersiv16si */
    case 4759:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 4758:  /* *avx512f_gatherdiv2df_2 */
    case 4757:  /* *avx512f_gatherdiv2df_2 */
    case 4756:  /* *avx512f_gatherdiv2di_2 */
    case 4755:  /* *avx512f_gatherdiv2di_2 */
    case 4754:  /* *avx512f_gatherdiv4sf_2 */
    case 4753:  /* *avx512f_gatherdiv4sf_2 */
    case 4752:  /* *avx512f_gatherdiv4si_2 */
    case 4751:  /* *avx512f_gatherdiv4si_2 */
    case 4750:  /* *avx512f_gatherdiv4df_2 */
    case 4749:  /* *avx512f_gatherdiv4df_2 */
    case 4748:  /* *avx512f_gatherdiv4di_2 */
    case 4747:  /* *avx512f_gatherdiv4di_2 */
    case 4746:  /* *avx512f_gatherdiv8sf_2 */
    case 4745:  /* *avx512f_gatherdiv8sf_2 */
    case 4744:  /* *avx512f_gatherdiv8si_2 */
    case 4743:  /* *avx512f_gatherdiv8si_2 */
    case 4742:  /* *avx512f_gatherdiv8df_2 */
    case 4741:  /* *avx512f_gatherdiv8df_2 */
    case 4740:  /* *avx512f_gatherdiv8di_2 */
    case 4739:  /* *avx512f_gatherdiv8di_2 */
    case 4738:  /* *avx512f_gatherdiv16sf_2 */
    case 4737:  /* *avx512f_gatherdiv16sf_2 */
    case 4736:  /* *avx512f_gatherdiv16si_2 */
    case 4735:  /* *avx512f_gatherdiv16si_2 */
    case 4710:  /* *avx512f_gathersiv2df_2 */
    case 4709:  /* *avx512f_gathersiv2df_2 */
    case 4708:  /* *avx512f_gathersiv2di_2 */
    case 4707:  /* *avx512f_gathersiv2di_2 */
    case 4706:  /* *avx512f_gathersiv4sf_2 */
    case 4705:  /* *avx512f_gathersiv4sf_2 */
    case 4704:  /* *avx512f_gathersiv4si_2 */
    case 4703:  /* *avx512f_gathersiv4si_2 */
    case 4702:  /* *avx512f_gathersiv4df_2 */
    case 4701:  /* *avx512f_gathersiv4df_2 */
    case 4700:  /* *avx512f_gathersiv4di_2 */
    case 4699:  /* *avx512f_gathersiv4di_2 */
    case 4698:  /* *avx512f_gathersiv8sf_2 */
    case 4697:  /* *avx512f_gathersiv8sf_2 */
    case 4696:  /* *avx512f_gathersiv8si_2 */
    case 4695:  /* *avx512f_gathersiv8si_2 */
    case 4694:  /* *avx512f_gathersiv8df_2 */
    case 4693:  /* *avx512f_gathersiv8df_2 */
    case 4692:  /* *avx512f_gathersiv8di_2 */
    case 4691:  /* *avx512f_gathersiv8di_2 */
    case 4690:  /* *avx512f_gathersiv16sf_2 */
    case 4689:  /* *avx512f_gathersiv16sf_2 */
    case 4688:  /* *avx512f_gathersiv16si_2 */
    case 4687:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4734:  /* *avx512f_gatherdiv2df */
    case 4733:  /* *avx512f_gatherdiv2df */
    case 4732:  /* *avx512f_gatherdiv2di */
    case 4731:  /* *avx512f_gatherdiv2di */
    case 4730:  /* *avx512f_gatherdiv4sf */
    case 4729:  /* *avx512f_gatherdiv4sf */
    case 4728:  /* *avx512f_gatherdiv4si */
    case 4727:  /* *avx512f_gatherdiv4si */
    case 4726:  /* *avx512f_gatherdiv4df */
    case 4725:  /* *avx512f_gatherdiv4df */
    case 4724:  /* *avx512f_gatherdiv4di */
    case 4723:  /* *avx512f_gatherdiv4di */
    case 4722:  /* *avx512f_gatherdiv8sf */
    case 4721:  /* *avx512f_gatherdiv8sf */
    case 4720:  /* *avx512f_gatherdiv8si */
    case 4719:  /* *avx512f_gatherdiv8si */
    case 4718:  /* *avx512f_gatherdiv8df */
    case 4717:  /* *avx512f_gatherdiv8df */
    case 4716:  /* *avx512f_gatherdiv8di */
    case 4715:  /* *avx512f_gatherdiv8di */
    case 4714:  /* *avx512f_gatherdiv16sf */
    case 4713:  /* *avx512f_gatherdiv16sf */
    case 4712:  /* *avx512f_gatherdiv16si */
    case 4711:  /* *avx512f_gatherdiv16si */
    case 4686:  /* *avx512f_gathersiv2df */
    case 4685:  /* *avx512f_gathersiv2df */
    case 4684:  /* *avx512f_gathersiv2di */
    case 4683:  /* *avx512f_gathersiv2di */
    case 4682:  /* *avx512f_gathersiv4sf */
    case 4681:  /* *avx512f_gathersiv4sf */
    case 4680:  /* *avx512f_gathersiv4si */
    case 4679:  /* *avx512f_gathersiv4si */
    case 4678:  /* *avx512f_gathersiv4df */
    case 4677:  /* *avx512f_gathersiv4df */
    case 4676:  /* *avx512f_gathersiv4di */
    case 4675:  /* *avx512f_gathersiv4di */
    case 4674:  /* *avx512f_gathersiv8sf */
    case 4673:  /* *avx512f_gathersiv8sf */
    case 4672:  /* *avx512f_gathersiv8si */
    case 4671:  /* *avx512f_gathersiv8si */
    case 4670:  /* *avx512f_gathersiv8df */
    case 4669:  /* *avx512f_gathersiv8df */
    case 4668:  /* *avx512f_gathersiv8di */
    case 4667:  /* *avx512f_gathersiv8di */
    case 4666:  /* *avx512f_gathersiv16sf */
    case 4665:  /* *avx512f_gathersiv16sf */
    case 4664:  /* *avx512f_gathersiv16si */
    case 4663:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4662:  /* *avx2_gatherdiv8sf_4 */
    case 4661:  /* *avx2_gatherdiv8sf_4 */
    case 4660:  /* *avx2_gatherdiv8si_4 */
    case 4659:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4658:  /* *avx2_gatherdiv8sf_3 */
    case 4657:  /* *avx2_gatherdiv8sf_3 */
    case 4656:  /* *avx2_gatherdiv8si_3 */
    case 4655:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4654:  /* *avx2_gatherdiv8sf_2 */
    case 4653:  /* *avx2_gatherdiv8sf_2 */
    case 4652:  /* *avx2_gatherdiv8si_2 */
    case 4651:  /* *avx2_gatherdiv8si_2 */
    case 4650:  /* *avx2_gatherdiv4sf_2 */
    case 4649:  /* *avx2_gatherdiv4sf_2 */
    case 4648:  /* *avx2_gatherdiv4si_2 */
    case 4647:  /* *avx2_gatherdiv4si_2 */
    case 4646:  /* *avx2_gatherdiv4df_2 */
    case 4645:  /* *avx2_gatherdiv4df_2 */
    case 4644:  /* *avx2_gatherdiv4di_2 */
    case 4643:  /* *avx2_gatherdiv4di_2 */
    case 4642:  /* *avx2_gatherdiv2df_2 */
    case 4641:  /* *avx2_gatherdiv2df_2 */
    case 4640:  /* *avx2_gatherdiv2di_2 */
    case 4639:  /* *avx2_gatherdiv2di_2 */
    case 4622:  /* *avx2_gathersiv8sf_2 */
    case 4621:  /* *avx2_gathersiv8sf_2 */
    case 4620:  /* *avx2_gathersiv8si_2 */
    case 4619:  /* *avx2_gathersiv8si_2 */
    case 4618:  /* *avx2_gathersiv4sf_2 */
    case 4617:  /* *avx2_gathersiv4sf_2 */
    case 4616:  /* *avx2_gathersiv4si_2 */
    case 4615:  /* *avx2_gathersiv4si_2 */
    case 4614:  /* *avx2_gathersiv4df_2 */
    case 4613:  /* *avx2_gathersiv4df_2 */
    case 4612:  /* *avx2_gathersiv4di_2 */
    case 4611:  /* *avx2_gathersiv4di_2 */
    case 4610:  /* *avx2_gathersiv2df_2 */
    case 4609:  /* *avx2_gathersiv2df_2 */
    case 4608:  /* *avx2_gathersiv2di_2 */
    case 4607:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4638:  /* *avx2_gatherdiv8sf */
    case 4637:  /* *avx2_gatherdiv8sf */
    case 4636:  /* *avx2_gatherdiv8si */
    case 4635:  /* *avx2_gatherdiv8si */
    case 4634:  /* *avx2_gatherdiv4sf */
    case 4633:  /* *avx2_gatherdiv4sf */
    case 4632:  /* *avx2_gatherdiv4si */
    case 4631:  /* *avx2_gatherdiv4si */
    case 4630:  /* *avx2_gatherdiv4df */
    case 4629:  /* *avx2_gatherdiv4df */
    case 4628:  /* *avx2_gatherdiv4di */
    case 4627:  /* *avx2_gatherdiv4di */
    case 4626:  /* *avx2_gatherdiv2df */
    case 4625:  /* *avx2_gatherdiv2df */
    case 4624:  /* *avx2_gatherdiv2di */
    case 4623:  /* *avx2_gatherdiv2di */
    case 4606:  /* *avx2_gathersiv8sf */
    case 4605:  /* *avx2_gathersiv8sf */
    case 4604:  /* *avx2_gathersiv8si */
    case 4603:  /* *avx2_gathersiv8si */
    case 4602:  /* *avx2_gathersiv4sf */
    case 4601:  /* *avx2_gathersiv4sf */
    case 4600:  /* *avx2_gathersiv4si */
    case 4599:  /* *avx2_gathersiv4si */
    case 4598:  /* *avx2_gathersiv4df */
    case 4597:  /* *avx2_gathersiv4df */
    case 4596:  /* *avx2_gathersiv4di */
    case 4595:  /* *avx2_gathersiv4di */
    case 4594:  /* *avx2_gathersiv2df */
    case 4593:  /* *avx2_gathersiv2df */
    case 4592:  /* *avx2_gathersiv2di */
    case 4591:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4585:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4504:  /* avx2_maskstoreq256 */
    case 4503:  /* avx2_maskstored256 */
    case 4502:  /* avx2_maskstoreq */
    case 4501:  /* avx2_maskstored */
    case 4500:  /* avx_maskstorepd256 */
    case 4499:  /* avx_maskstoreps256 */
    case 4498:  /* avx_maskstorepd */
    case 4497:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4496:  /* avx2_maskloadq256 */
    case 4495:  /* avx2_maskloadd256 */
    case 4494:  /* avx2_maskloadq */
    case 4493:  /* avx2_maskloadd */
    case 4492:  /* avx_maskloadpd256 */
    case 4491:  /* avx_maskloadps256 */
    case 4490:  /* avx_maskloadpd */
    case 4489:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4462:  /* *avx_vperm2f128v4df_nozero */
    case 4461:  /* *avx_vperm2f128v8sf_nozero */
    case 4460:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4456:  /* avx512bw_vpermt2varv32hi3_mask */
    case 4455:  /* avx512vl_vpermt2varv16hi3_mask */
    case 4454:  /* avx512vl_vpermt2varv8hi3_mask */
    case 4453:  /* avx512vl_vpermt2varv32qi3_mask */
    case 4452:  /* avx512vl_vpermt2varv16qi3_mask */
    case 4451:  /* avx512bw_vpermt2varv64qi3_mask */
    case 4450:  /* avx512vl_vpermt2varv2df3_mask */
    case 4449:  /* avx512vl_vpermt2varv2di3_mask */
    case 4448:  /* avx512vl_vpermt2varv4sf3_mask */
    case 4447:  /* avx512vl_vpermt2varv4si3_mask */
    case 4446:  /* avx512vl_vpermt2varv4df3_mask */
    case 4445:  /* avx512vl_vpermt2varv4di3_mask */
    case 4444:  /* avx512vl_vpermt2varv8sf3_mask */
    case 4443:  /* avx512vl_vpermt2varv8si3_mask */
    case 4442:  /* avx512f_vpermt2varv8df3_mask */
    case 4441:  /* avx512f_vpermt2varv8di3_mask */
    case 4440:  /* avx512f_vpermt2varv16sf3_mask */
    case 4439:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4402:  /* avx512bw_vpermi2varv32hi3_mask */
    case 4401:  /* avx512vl_vpermi2varv16hi3_mask */
    case 4400:  /* avx512vl_vpermi2varv8hi3_mask */
    case 4399:  /* avx512vl_vpermi2varv32qi3_mask */
    case 4398:  /* avx512vl_vpermi2varv16qi3_mask */
    case 4397:  /* avx512bw_vpermi2varv64qi3_mask */
    case 4396:  /* avx512vl_vpermi2varv2df3_mask */
    case 4395:  /* avx512vl_vpermi2varv2di3_mask */
    case 4394:  /* avx512vl_vpermi2varv4sf3_mask */
    case 4393:  /* avx512vl_vpermi2varv4si3_mask */
    case 4392:  /* avx512vl_vpermi2varv4df3_mask */
    case 4391:  /* avx512vl_vpermi2varv4di3_mask */
    case 4390:  /* avx512vl_vpermi2varv8sf3_mask */
    case 4389:  /* avx512vl_vpermi2varv8si3_mask */
    case 4388:  /* avx512f_vpermi2varv8df3_mask */
    case 4387:  /* avx512f_vpermi2varv8di3_mask */
    case 4386:  /* avx512f_vpermi2varv16sf3_mask */
    case 4385:  /* avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4336:  /* *avx_vpermilpv2df_mask */
    case 4334:  /* *avx_vpermilpv4df_mask */
    case 4332:  /* *avx512f_vpermilpv8df_mask */
    case 4330:  /* *avx_vpermilpv4sf_mask */
    case 4328:  /* *avx_vpermilpv8sf_mask */
    case 4326:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4468:  /* *ssse3_palignrv2df_perm */
    case 4467:  /* *ssse3_palignrv4sf_perm */
    case 4466:  /* *ssse3_palignrv2di_perm */
    case 4465:  /* *ssse3_palignrv4si_perm */
    case 4464:  /* *ssse3_palignrv8hi_perm */
    case 4463:  /* *ssse3_palignrv16qi_perm */
    case 4335:  /* *avx_vpermilpv2df */
    case 4333:  /* *avx_vpermilpv4df */
    case 4331:  /* *avx512f_vpermilpv8df */
    case 4329:  /* *avx_vpermilpv4sf */
    case 4327:  /* *avx_vpermilpv8sf */
    case 4325:  /* *avx512f_vpermilpv16sf */
    case 4324:  /* *avx_vperm_broadcast_v4df */
    case 4323:  /* *avx_vperm_broadcast_v8sf */
    case 4322:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4289:  /* avx_vbroadcastf128_v4df */
    case 4288:  /* avx_vbroadcastf128_v8sf */
    case 4287:  /* avx_vbroadcastf128_v4di */
    case 4286:  /* avx_vbroadcastf128_v8si */
    case 4285:  /* avx_vbroadcastf128_v16hi */
    case 4284:  /* avx_vbroadcastf128_v32qi */
    case 4273:  /* avx2_vbroadcasti128_v4di */
    case 4272:  /* avx2_vbroadcasti128_v8si */
    case 4271:  /* avx2_vbroadcasti128_v16hi */
    case 4270:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4111:  /* xop_maskcmp_uns2v2di3 */
    case 4110:  /* xop_maskcmp_uns2v4si3 */
    case 4109:  /* xop_maskcmp_uns2v8hi3 */
    case 4108:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 4107:  /* xop_maskcmp_unsv2di3 */
    case 4106:  /* xop_maskcmp_unsv4si3 */
    case 4105:  /* xop_maskcmp_unsv8hi3 */
    case 4104:  /* xop_maskcmp_unsv16qi3 */
    case 4103:  /* xop_maskcmpv2di3 */
    case 4102:  /* xop_maskcmpv4si3 */
    case 4101:  /* xop_maskcmpv8hi3 */
    case 4100:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4091:  /* xop_shlv2di3 */
    case 4090:  /* xop_shlv4si3 */
    case 4089:  /* xop_shlv8hi3 */
    case 4088:  /* xop_shlv16qi3 */
    case 4087:  /* xop_shav2di3 */
    case 4086:  /* xop_shav4si3 */
    case 4085:  /* xop_shav8hi3 */
    case 4084:  /* xop_shav16qi3 */
    case 4083:  /* xop_vrotlv2di3 */
    case 4082:  /* xop_vrotlv4si3 */
    case 4081:  /* xop_vrotlv8hi3 */
    case 4080:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 4071:  /* xop_pperm_pack_v8hi_v16qi */
    case 4070:  /* xop_pperm_pack_v4si_v8hi */
    case 4069:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4058:  /* xop_phaddubq */
    case 4057:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 4062:  /* xop_phadduwq */
    case 4061:  /* xop_phaddwq */
    case 4056:  /* xop_phaddubd */
    case 4055:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4067:  /* xop_phsubdq */
    case 4066:  /* xop_phsubwd */
    case 4065:  /* xop_phsubbw */
    case 4064:  /* xop_phaddudq */
    case 4063:  /* xop_phadddq */
    case 4060:  /* xop_phadduwd */
    case 4059:  /* xop_phaddwd */
    case 4054:  /* xop_phaddubw */
    case 4053:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4052:  /* xop_pcmov_v2df */
    case 4051:  /* xop_pcmov_v4df256 */
    case 4050:  /* xop_pcmov_v8df512 */
    case 4049:  /* xop_pcmov_v4sf */
    case 4048:  /* xop_pcmov_v8sf256 */
    case 4047:  /* xop_pcmov_v16sf512 */
    case 4046:  /* xop_pcmov_v2di */
    case 4045:  /* xop_pcmov_v4di256 */
    case 4044:  /* xop_pcmov_v8di512 */
    case 4043:  /* xop_pcmov_v4si */
    case 4042:  /* xop_pcmov_v8si256 */
    case 4041:  /* xop_pcmov_v16si512 */
    case 4040:  /* xop_pcmov_v8hi */
    case 4039:  /* xop_pcmov_v16hi256 */
    case 4038:  /* xop_pcmov_v16qi */
    case 4037:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4036:  /* xop_pmadcsswd */
    case 4035:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4034:  /* xop_pmacsswd */
    case 4033:  /* xop_pmacswd */
    case 4032:  /* xop_pmacssdqh */
    case 4031:  /* xop_pmacsdqh */
    case 4030:  /* xop_pmacssdql */
    case 4029:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4024:  /* avx512er_vmrsqrt28v2df_round */
    case 4022:  /* avx512er_vmrsqrt28v4sf_round */
    case 4012:  /* avx512er_vmrcp28v2df_round */
    case 4010:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 3992:  /* *avx512pf_scatterpfv8didf_mask */
    case 3991:  /* *avx512pf_scatterpfv8didf_mask */
    case 3990:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3989:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3988:  /* *avx512pf_scatterpfv8disf_mask */
    case 3987:  /* *avx512pf_scatterpfv8disf_mask */
    case 3986:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3985:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3984:  /* *avx512pf_gatherpfv8didf_mask */
    case 3983:  /* *avx512pf_gatherpfv8didf_mask */
    case 3982:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3981:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3980:  /* *avx512pf_gatherpfv8disf_mask */
    case 3979:  /* *avx512pf_gatherpfv8disf_mask */
    case 3978:  /* *avx512pf_gatherpfv16sisf_mask */
    case 3977:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 3976:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 3975:  /* sse4_2_pcmpistrm */
    case 3974:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3973:  /* *sse4_2_pcmpistr_unaligned */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1), 0, 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3972:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3971:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 3970:  /* sse4_2_pcmpestrm */
    case 3969:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 3968:  /* *sse4_2_pcmpestr_unaligned */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2), 0, 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0, 0);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 3967:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 3966:  /* sse4_1_roundsd */
    case 3965:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3960:  /* avx_ptestv4df */
    case 3959:  /* avx_ptestv8sf */
    case 3958:  /* avx_ptestv4di */
    case 3957:  /* avx_ptestv8si */
    case 3956:  /* avx_ptestv16hi */
    case 3955:  /* avx_ptestv32qi */
    case 3954:  /* sse4_1_ptestv2df */
    case 3953:  /* sse4_1_ptestv4sf */
    case 3952:  /* sse4_1_ptestv2di */
    case 3951:  /* sse4_1_ptestv4si */
    case 3950:  /* sse4_1_ptestv8hi */
    case 3949:  /* sse4_1_ptestv16qi */
    case 3948:  /* avx_vtestpd */
    case 3947:  /* avx_vtestpd256 */
    case 3946:  /* avx_vtestps */
    case 3945:  /* avx_vtestps256 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3783:  /* *ssse3_pmulhrswv8hi3_mask */
    case 3781:  /* *avx2_pmulhrswv16hi3_mask */
    case 3779:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3784:  /* *ssse3_pmulhrswv4hi3 */
    case 3782:  /* *ssse3_pmulhrswv8hi3 */
    case 3780:  /* *avx2_pmulhrswv16hi3 */
    case 3778:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3775:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3774:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 3762:  /* avx2_phsubdv8si3 */
    case 3761:  /* avx2_phadddv8si3 */
    case 3756:  /* ssse3_phsubswv8hi3 */
    case 3755:  /* ssse3_phsubwv8hi3 */
    case 3754:  /* ssse3_phaddswv8hi3 */
    case 3753:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 3752:  /* avx2_phsubswv16hi3 */
    case 3751:  /* avx2_phsubwv16hi3 */
    case 3750:  /* avx2_phaddswv16hi3 */
    case 3749:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 3725:  /* *sse2_uavgv8hi3_mask */
    case 3723:  /* *avx2_uavgv16hi3_mask */
    case 3721:  /* *avx512bw_uavgv32hi3_mask */
    case 3719:  /* *sse2_uavgv16qi3_mask */
    case 3717:  /* *avx2_uavgv32qi3_mask */
    case 3715:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3724:  /* *sse2_uavgv8hi3 */
    case 3722:  /* *avx2_uavgv16hi3 */
    case 3720:  /* *avx512bw_uavgv32hi3 */
    case 3718:  /* *sse2_uavgv16qi3 */
    case 3716:  /* *avx2_uavgv32qi3 */
    case 3714:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3691:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3690:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3689:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3688:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3683:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3682:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 3677:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3676:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3675:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3674:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4480:  /* vec_set_lo_v8sf_mask */
    case 4478:  /* vec_set_lo_v8si_mask */
    case 4472:  /* vec_set_lo_v4df_mask */
    case 4470:  /* vec_set_lo_v4di_mask */
    case 3653:  /* vec_set_lo_v8di_mask */
    case 3651:  /* vec_set_lo_v8df_mask */
    case 3645:  /* vec_set_lo_v16si_mask */
    case 3643:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3641:  /* avx512f_vinserti32x4_1_mask */
    case 3639:  /* avx512f_vinsertf32x4_1_mask */
    case 3637:  /* avx512dq_vinserti64x2_1_mask */
    case 3635:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3640:  /* *avx512f_vinserti32x4_1 */
    case 3638:  /* *avx512f_vinsertf32x4_1 */
    case 3636:  /* *avx512dq_vinserti64x2_1 */
    case 3634:  /* *avx512dq_vinsertf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3865:  /* sse4_1_packusdw_mask */
    case 3863:  /* avx2_packusdw_mask */
    case 3861:  /* avx512bw_packusdw_mask */
    case 3593:  /* sse2_packuswb_mask */
    case 3591:  /* avx2_packuswb_mask */
    case 3589:  /* avx512bw_packuswb_mask */
    case 3587:  /* sse2_packssdw_mask */
    case 3585:  /* avx2_packssdw_mask */
    case 3583:  /* avx512bw_packssdw_mask */
    case 3581:  /* sse2_packsswb_mask */
    case 3579:  /* avx2_packsswb_mask */
    case 3577:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4874:  /* avx512dq_fpclassv2df_mask */
    case 4872:  /* avx512dq_fpclassv4df_mask */
    case 4870:  /* avx512dq_fpclassv8df_mask */
    case 4868:  /* avx512dq_fpclassv4sf_mask */
    case 4866:  /* avx512dq_fpclassv8sf_mask */
    case 4864:  /* avx512dq_fpclassv16sf_mask */
    case 4584:  /* *vcvtps2ph */
    case 3575:  /* avx512vl_testnmv2di3_mask */
    case 3573:  /* avx512vl_testnmv4di3_mask */
    case 3571:  /* avx512f_testnmv8di3_mask */
    case 3569:  /* avx512vl_testnmv4si3_mask */
    case 3567:  /* avx512vl_testnmv8si3_mask */
    case 3565:  /* avx512f_testnmv16si3_mask */
    case 3563:  /* avx512vl_testnmv8hi3_mask */
    case 3561:  /* avx512vl_testnmv16hi3_mask */
    case 3559:  /* avx512bw_testnmv32hi3_mask */
    case 3557:  /* avx512vl_testnmv32qi3_mask */
    case 3555:  /* avx512vl_testnmv16qi3_mask */
    case 3553:  /* avx512bw_testnmv64qi3_mask */
    case 3551:  /* avx512vl_testmv2di3_mask */
    case 3549:  /* avx512vl_testmv4di3_mask */
    case 3547:  /* avx512f_testmv8di3_mask */
    case 3545:  /* avx512vl_testmv4si3_mask */
    case 3543:  /* avx512vl_testmv8si3_mask */
    case 3541:  /* avx512f_testmv16si3_mask */
    case 3539:  /* avx512vl_testmv8hi3_mask */
    case 3537:  /* avx512vl_testmv16hi3_mask */
    case 3535:  /* avx512bw_testmv32hi3_mask */
    case 3533:  /* avx512vl_testmv32qi3_mask */
    case 3531:  /* avx512vl_testmv16qi3_mask */
    case 3529:  /* avx512bw_testmv64qi3_mask */
    case 3434:  /* avx512vl_gtv8hi3_mask */
    case 3432:  /* avx512vl_gtv16hi3_mask */
    case 3430:  /* avx512bw_gtv32hi3_mask */
    case 3428:  /* avx512vl_gtv32qi3_mask */
    case 3426:  /* avx512vl_gtv16qi3_mask */
    case 3424:  /* avx512bw_gtv64qi3_mask */
    case 3422:  /* avx512vl_gtv2di3_mask */
    case 3420:  /* avx512vl_gtv4di3_mask */
    case 3418:  /* avx512f_gtv8di3_mask */
    case 3416:  /* avx512vl_gtv4si3_mask */
    case 3414:  /* avx512vl_gtv8si3_mask */
    case 3412:  /* avx512f_gtv16si3_mask */
    case 3401:  /* avx512vl_eqv2di3_mask_1 */
    case 3399:  /* avx512vl_eqv4di3_mask_1 */
    case 3397:  /* avx512f_eqv8di3_mask_1 */
    case 3395:  /* avx512vl_eqv4si3_mask_1 */
    case 3393:  /* avx512vl_eqv8si3_mask_1 */
    case 3391:  /* avx512f_eqv16si3_mask_1 */
    case 3389:  /* avx512vl_eqv8hi3_mask_1 */
    case 3387:  /* avx512vl_eqv16hi3_mask_1 */
    case 3385:  /* avx512bw_eqv32hi3_mask_1 */
    case 3383:  /* avx512vl_eqv32qi3_mask_1 */
    case 3381:  /* avx512vl_eqv16qi3_mask_1 */
    case 3379:  /* avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3113:  /* *sse4_1_mulv2siv2di3_mask */
    case 3111:  /* *vec_widen_smult_even_v8si_mask */
    case 3109:  /* *vec_widen_smult_even_v16si_mask */
    case 3107:  /* *vec_widen_umult_even_v4si_mask */
    case 3105:  /* *vec_widen_umult_even_v8si_mask */
    case 3103:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3101:  /* *umulv8hi3_highpart_mask */
    case 3099:  /* *smulv8hi3_highpart_mask */
    case 3097:  /* *umulv16hi3_highpart_mask */
    case 3095:  /* *smulv16hi3_highpart_mask */
    case 3093:  /* *umulv32hi3_highpart_mask */
    case 3091:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2963:  /* avx512f_us_truncatev8div16qi2_mask_store */
    case 2962:  /* avx512f_truncatev8div16qi2_mask_store */
    case 2961:  /* avx512f_ss_truncatev8div16qi2_mask_store */
    case 2948:  /* avx512vl_us_truncatev2div2si2_mask_store */
    case 2947:  /* avx512vl_truncatev2div2si2_mask_store */
    case 2946:  /* avx512vl_ss_truncatev2div2si2_mask_store */
    case 2933:  /* avx512vl_us_truncatev2div2hi2_mask_store */
    case 2932:  /* avx512vl_truncatev2div2hi2_mask_store */
    case 2931:  /* avx512vl_ss_truncatev2div2hi2_mask_store */
    case 2921:  /* avx512vl_us_truncatev4div4hi2_mask_store */
    case 2920:  /* avx512vl_truncatev4div4hi2_mask_store */
    case 2919:  /* avx512vl_ss_truncatev4div4hi2_mask_store */
    case 2918:  /* avx512vl_us_truncatev4siv4hi2_mask_store */
    case 2917:  /* avx512vl_truncatev4siv4hi2_mask_store */
    case 2916:  /* avx512vl_ss_truncatev4siv4hi2_mask_store */
    case 2888:  /* avx512vl_us_truncatev8siv8qi2_mask_store */
    case 2887:  /* avx512vl_truncatev8siv8qi2_mask_store */
    case 2886:  /* avx512vl_ss_truncatev8siv8qi2_mask_store */
    case 2885:  /* avx512vl_us_truncatev8hiv8qi2_mask_store */
    case 2884:  /* avx512vl_truncatev8hiv8qi2_mask_store */
    case 2883:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store */
    case 2864:  /* avx512vl_us_truncatev4div4qi2_mask_store */
    case 2863:  /* avx512vl_truncatev4div4qi2_mask_store */
    case 2862:  /* avx512vl_ss_truncatev4div4qi2_mask_store */
    case 2861:  /* avx512vl_us_truncatev4siv4qi2_mask_store */
    case 2860:  /* avx512vl_truncatev4siv4qi2_mask_store */
    case 2859:  /* avx512vl_ss_truncatev4siv4qi2_mask_store */
    case 2840:  /* avx512vl_us_truncatev2div2qi2_mask_store */
    case 2839:  /* avx512vl_truncatev2div2qi2_mask_store */
    case 2838:  /* avx512vl_ss_truncatev2div2qi2_mask_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 2954:  /* *avx512f_us_truncatev8div16qi2_store */
    case 2953:  /* *avx512f_truncatev8div16qi2_store */
    case 2952:  /* *avx512f_ss_truncatev8div16qi2_store */
    case 2939:  /* *avx512vl_us_truncatev2div2si2_store */
    case 2938:  /* *avx512vl_truncatev2div2si2_store */
    case 2937:  /* *avx512vl_ss_truncatev2div2si2_store */
    case 2924:  /* *avx512vl_us_truncatev2div2hi2_store */
    case 2923:  /* *avx512vl_truncatev2div2hi2_store */
    case 2922:  /* *avx512vl_ss_truncatev2div2hi2_store */
    case 2903:  /* *avx512vl_us_truncatev4div4hi2_store */
    case 2902:  /* *avx512vl_truncatev4div4hi2_store */
    case 2901:  /* *avx512vl_ss_truncatev4div4hi2_store */
    case 2900:  /* *avx512vl_us_truncatev4siv4hi2_store */
    case 2899:  /* *avx512vl_truncatev4siv4hi2_store */
    case 2898:  /* *avx512vl_ss_truncatev4siv4hi2_store */
    case 2870:  /* *avx512vl_us_truncatev8siv8qi2_store */
    case 2869:  /* *avx512vl_truncatev8siv8qi2_store */
    case 2868:  /* *avx512vl_ss_truncatev8siv8qi2_store */
    case 2867:  /* *avx512vl_us_truncatev8hiv8qi2_store */
    case 2866:  /* *avx512vl_truncatev8hiv8qi2_store */
    case 2865:  /* *avx512vl_ss_truncatev8hiv8qi2_store */
    case 2846:  /* *avx512vl_us_truncatev4div4qi2_store */
    case 2845:  /* *avx512vl_truncatev4div4qi2_store */
    case 2844:  /* *avx512vl_ss_truncatev4div4qi2_store */
    case 2843:  /* *avx512vl_us_truncatev4siv4qi2_store */
    case 2842:  /* *avx512vl_truncatev4siv4qi2_store */
    case 2841:  /* *avx512vl_ss_truncatev4siv4qi2_store */
    case 2831:  /* *avx512vl_us_truncatev2div2qi2_store */
    case 2830:  /* *avx512vl_truncatev2div2qi2_store */
    case 2829:  /* *avx512vl_ss_truncatev2div2qi2_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2755:  /* sse2_shufpd_v2df */
    case 2754:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2741:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3673:  /* avx512f_shuf_i32x4_1_mask */
    case 3671:  /* avx512f_shuf_f32x4_1_mask */
    case 2736:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3672:  /* avx512f_shuf_i32x4_1 */
    case 3670:  /* avx512f_shuf_f32x4_1 */
    case 2735:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4904:  /* avx512f_vgetmantv2df_round */
    case 4902:  /* avx512f_vgetmantv4sf_round */
    case 4862:  /* avx512dq_rangesv2df_round */
    case 4860:  /* avx512dq_rangesv4sf_round */
    case 2734:  /* avx512f_rndscalev2df_round */
    case 2732:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2706:  /* avx512f_sfixupimmv2df_mask_round */
    case 2704:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2705:  /* avx512f_sfixupimmv2df_mask */
    case 2703:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2702:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 2698:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2701:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 2697:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2700:  /* avx512f_sfixupimmv2df_round */
    case 2696:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2699:  /* avx512f_sfixupimmv2df */
    case 2695:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2694:  /* avx512vl_fixupimmv2df_mask_round */
    case 2692:  /* avx512vl_fixupimmv4df_mask_round */
    case 2690:  /* avx512f_fixupimmv8df_mask_round */
    case 2688:  /* avx512vl_fixupimmv4sf_mask_round */
    case 2686:  /* avx512vl_fixupimmv8sf_mask_round */
    case 2684:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2682:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 2678:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 2674:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 2670:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 2666:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 2662:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2680:  /* avx512vl_fixupimmv2df_round */
    case 2676:  /* avx512vl_fixupimmv4df_round */
    case 2672:  /* avx512f_fixupimmv8df_round */
    case 2668:  /* avx512vl_fixupimmv4sf_round */
    case 2664:  /* avx512vl_fixupimmv8sf_round */
    case 2660:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2693:  /* avx512vl_fixupimmv2df_mask */
    case 2691:  /* avx512vl_fixupimmv4df_mask */
    case 2689:  /* avx512f_fixupimmv8df_mask */
    case 2687:  /* avx512vl_fixupimmv4sf_mask */
    case 2685:  /* avx512vl_fixupimmv8sf_mask */
    case 2683:  /* avx512f_fixupimmv16sf_mask */
    case 2618:  /* avx512vl_vternlogv2di_mask */
    case 2617:  /* avx512vl_vternlogv4di_mask */
    case 2616:  /* avx512f_vternlogv8di_mask */
    case 2615:  /* avx512vl_vternlogv4si_mask */
    case 2614:  /* avx512vl_vternlogv8si_mask */
    case 2613:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2681:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 2677:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 2673:  /* avx512f_fixupimmv8df_maskz_1 */
    case 2669:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 2665:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 2661:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 2612:  /* avx512vl_vternlogv2di_maskz_1 */
    case 2610:  /* avx512vl_vternlogv4di_maskz_1 */
    case 2608:  /* avx512f_vternlogv8di_maskz_1 */
    case 2606:  /* avx512vl_vternlogv4si_maskz_1 */
    case 2604:  /* avx512vl_vternlogv8si_maskz_1 */
    case 2602:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4119:  /* xop_vpermil2v2df3 */
    case 4118:  /* xop_vpermil2v4df3 */
    case 4117:  /* xop_vpermil2v4sf3 */
    case 4116:  /* xop_vpermil2v8sf3 */
    case 3841:  /* sse4a_insertqi */
    case 2679:  /* avx512vl_fixupimmv2df */
    case 2675:  /* avx512vl_fixupimmv4df */
    case 2671:  /* avx512f_fixupimmv8df */
    case 2667:  /* avx512vl_fixupimmv4sf */
    case 2663:  /* avx512vl_fixupimmv8sf */
    case 2659:  /* avx512f_fixupimmv16sf */
    case 2611:  /* avx512vl_vternlogv2di */
    case 2609:  /* avx512vl_vternlogv4di */
    case 2607:  /* avx512f_vternlogv8di */
    case 2605:  /* avx512vl_vternlogv4si */
    case 2603:  /* avx512vl_vternlogv8si */
    case 2601:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 2646:  /* avx512f_sgetexpv2df_round */
    case 2644:  /* avx512f_sgetexpv4sf_round */
    case 2576:  /* avx512f_vmscalefv2df_round */
    case 2574:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2645:  /* avx512f_sgetexpv2df */
    case 2643:  /* avx512f_sgetexpv4sf */
    case 2575:  /* avx512f_vmscalefv2df */
    case 2573:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2505:  /* *avx512dq_vextracti64x2_1 */
    case 2503:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 4180:  /* avx512f_permv8df_1_mask */
    case 4178:  /* avx512f_permv8di_1_mask */
    case 4176:  /* avx2_permv4df_1_mask */
    case 4174:  /* avx2_permv4di_1_mask */
    case 3685:  /* sse2_pshuflw_1_mask */
    case 3679:  /* sse2_pshufd_1_mask */
    case 2510:  /* avx512f_vextracti32x4_1_mask */
    case 2508:  /* avx512f_vextractf32x4_1_mask */
    case 2502:  /* avx512f_vextracti32x4_1_maskm */
    case 2501:  /* avx512f_vextractf32x4_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2506:  /* avx512dq_vextracti64x2_1_mask */
    case 2504:  /* avx512dq_vextractf64x2_1_mask */
    case 2500:  /* avx512dq_vextracti64x2_1_maskm */
    case 2499:  /* avx512dq_vextractf64x2_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3707:  /* *vec_extractv4si_mem */
    case 3705:  /* *vec_extractv4si */
    case 3700:  /* *vec_extractv8hi_mem */
    case 3699:  /* *vec_extractv16qi_mem */
    case 3694:  /* *vec_extractv8hi */
    case 3693:  /* *vec_extractv16qi */
    case 2498:  /* *vec_extractv4sf_mem */
    case 2497:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 2495:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3692:  /* sse2_loadld */
    case 2493:  /* vec_setv4sf_0 */
    case 2492:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 2762:  /* sse2_movsd */
    case 2483:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4487:  /* vec_set_lo_v32qi */
    case 4485:  /* vec_set_lo_v16hi */
    case 4479:  /* vec_set_lo_v8sf */
    case 4477:  /* vec_set_lo_v8si */
    case 4471:  /* vec_set_lo_v4df */
    case 4469:  /* vec_set_lo_v4di */
    case 3652:  /* vec_set_lo_v8di */
    case 3650:  /* vec_set_lo_v8df */
    case 3644:  /* vec_set_lo_v16si */
    case 3642:  /* vec_set_lo_v16sf */
    case 2761:  /* sse2_loadlpd */
    case 2482:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3660:  /* *avx512dq_shuf_f64x2_1 */
    case 3658:  /* *avx512dq_shuf_i64x2_1 */
    case 2739:  /* avx_shufpd256_1 */
    case 2478:  /* sse_shufps_v4sf */
    case 2477:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3661:  /* avx512dq_shuf_f64x2_1_mask */
    case 3659:  /* avx512dq_shuf_i64x2_1_mask */
    case 2740:  /* avx_shufpd256_1_mask */
    case 2476:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3669:  /* avx512vl_shuf_f32x4_1_mask */
    case 3667:  /* avx512vl_shuf_i32x4_1_mask */
    case 3665:  /* avx512f_shuf_i64x2_1_mask */
    case 3663:  /* avx512f_shuf_f64x2_1_mask */
    case 2738:  /* avx512f_shufpd512_1_mask */
    case 2475:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3668:  /* *avx512vl_shuf_f32x4_1 */
    case 3666:  /* *avx512vl_shuf_i32x4_1 */
    case 3664:  /* avx512f_shuf_i64x2_1 */
    case 3662:  /* avx512f_shuf_f64x2_1 */
    case 2737:  /* avx512f_shufpd512_1 */
    case 2474:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2473:  /* avx512f_movsldup512_mask */
    case 2471:  /* sse3_movsldup_mask */
    case 2469:  /* avx_movsldup256_mask */
    case 2467:  /* avx512f_movshdup512_mask */
    case 2465:  /* sse3_movshdup_mask */
    case 2463:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2472:  /* *avx512f_movsldup512 */
    case 2470:  /* sse3_movsldup */
    case 2468:  /* avx_movsldup256 */
    case 2466:  /* *avx512f_movshdup512 */
    case 2464:  /* sse3_movshdup */
    case 2462:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3629:  /* vec_interleave_lowv4si_mask */
    case 3627:  /* avx512f_interleave_lowv16si_mask */
    case 3625:  /* avx2_interleave_lowv8si_mask */
    case 3623:  /* vec_interleave_highv4si_mask */
    case 3621:  /* avx512f_interleave_highv16si_mask */
    case 3619:  /* avx2_interleave_highv8si_mask */
    case 3617:  /* vec_interleave_lowv8hi_mask */
    case 3615:  /* avx2_interleave_lowv16hi_mask */
    case 3613:  /* avx512bw_interleave_lowv32hi_mask */
    case 3611:  /* vec_interleave_highv8hi_mask */
    case 3609:  /* avx2_interleave_highv16hi_mask */
    case 3607:  /* avx512bw_interleave_highv32hi_mask */
    case 3605:  /* vec_interleave_lowv16qi_mask */
    case 3603:  /* avx2_interleave_lowv32qi_mask */
    case 3601:  /* avx512bw_interleave_lowv64qi_mask */
    case 3599:  /* vec_interleave_highv16qi_mask */
    case 3597:  /* avx2_interleave_highv32qi_mask */
    case 3595:  /* avx512bw_interleave_highv64qi_mask */
    case 2753:  /* vec_interleave_lowv2di_mask */
    case 2751:  /* avx512f_interleave_lowv8di_mask */
    case 2749:  /* avx2_interleave_lowv4di_mask */
    case 2747:  /* vec_interleave_highv2di_mask */
    case 2745:  /* avx512f_interleave_highv8di_mask */
    case 2743:  /* avx2_interleave_highv4di_mask */
    case 2571:  /* avx512vl_unpcklpd128_mask */
    case 2570:  /* *avx_unpcklpd256_mask */
    case 2568:  /* *avx512f_unpcklpd512_mask */
    case 2565:  /* avx512vl_unpckhpd128_mask */
    case 2564:  /* avx_unpckhpd256_mask */
    case 2562:  /* avx512f_unpckhpd512_mask */
    case 2460:  /* unpcklps128_mask */
    case 2459:  /* avx_unpcklps256_mask */
    case 2457:  /* avx512f_unpcklps512_mask */
    case 2455:  /* vec_interleave_highv4sf_mask */
    case 2453:  /* avx_unpckhps256_mask */
    case 2451:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2445:  /* *avx512vl_cvtmask2qv2di */
    case 2444:  /* *avx512vl_cvtmask2qv4di */
    case 2443:  /* *avx512f_cvtmask2qv8di */
    case 2442:  /* *avx512vl_cvtmask2dv4si */
    case 2441:  /* *avx512vl_cvtmask2dv8si */
    case 2440:  /* *avx512f_cvtmask2dv16si */
    case 2439:  /* *avx512vl_cvtmask2wv8hi */
    case 2438:  /* *avx512vl_cvtmask2wv16hi */
    case 2437:  /* *avx512bw_cvtmask2wv32hi */
    case 2436:  /* *avx512vl_cvtmask2bv32qi */
    case 2435:  /* *avx512vl_cvtmask2bv16qi */
    case 2434:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4575:  /* vcvtph2ps_mask */
    case 2333:  /* ufix_notruncv2dfv2si2_mask */
    case 2323:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4299:  /* avx512dq_broadcastv8sf_mask */
    case 4297:  /* avx512dq_broadcastv16sf_mask */
    case 4295:  /* avx512dq_broadcastv4si_mask */
    case 4293:  /* avx512dq_broadcastv8si_mask */
    case 4291:  /* avx512dq_broadcastv16si_mask */
    case 4222:  /* avx512vl_vec_dupv8hi_mask */
    case 4220:  /* avx512vl_vec_dupv16hi_mask */
    case 4218:  /* avx512bw_vec_dupv32hi_mask */
    case 4216:  /* avx512vl_vec_dupv32qi_mask */
    case 4214:  /* avx512vl_vec_dupv16qi_mask */
    case 4212:  /* avx512bw_vec_dupv64qi_mask */
    case 4210:  /* avx512vl_vec_dupv2df_mask */
    case 4208:  /* avx512vl_vec_dupv4df_mask */
    case 4206:  /* avx512f_vec_dupv8df_mask */
    case 4204:  /* avx512vl_vec_dupv4sf_mask */
    case 4202:  /* avx512vl_vec_dupv8sf_mask */
    case 4200:  /* avx512f_vec_dupv16sf_mask */
    case 4198:  /* avx512vl_vec_dupv2di_mask */
    case 4196:  /* avx512vl_vec_dupv4di_mask */
    case 4194:  /* avx512f_vec_dupv8di_mask */
    case 4192:  /* avx512vl_vec_dupv4si_mask */
    case 4190:  /* avx512vl_vec_dupv8si_mask */
    case 4188:  /* avx512f_vec_dupv16si_mask */
    case 3944:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 3942:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 3932:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 3930:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 3928:  /* avx2_zero_extendv4hiv4di2_mask */
    case 3926:  /* avx2_sign_extendv4hiv4di2_mask */
    case 3920:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 3918:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 3916:  /* avx2_zero_extendv4qiv4di2_mask */
    case 3914:  /* avx2_sign_extendv4qiv4di2_mask */
    case 3912:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 3910:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 3908:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 3906:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 3896:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 3894:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 3892:  /* avx2_zero_extendv8qiv8si2_mask */
    case 3890:  /* avx2_sign_extendv8qiv8si2_mask */
    case 3884:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 3882:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2447:  /* sse2_cvtps2pd_mask */
    case 2401:  /* sse2_cvttpd2dq_mask */
    case 2395:  /* ufix_truncv2sfv2di2_mask */
    case 2393:  /* fix_truncv2sfv2di2_mask */
    case 2343:  /* ufix_truncv2dfv2si2_mask */
    case 2314:  /* sse2_cvtdq2pd_mask */
    case 2310:  /* ufloatv2siv2df2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2960:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 2959:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 2958:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 2945:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 2944:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 2943:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 2930:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 2929:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 2928:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 2915:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 2914:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 2913:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 2912:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 2911:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 2910:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 2882:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 2881:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 2880:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 2879:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 2878:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 2877:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 2858:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 2857:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 2856:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 2855:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 2854:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 2853:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 2837:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 2836:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 2835:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2304:  /* *ufloatv2div2sf2_mask_1 */
    case 2303:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2957:  /* avx512f_us_truncatev8div16qi2_mask */
    case 2956:  /* avx512f_truncatev8div16qi2_mask */
    case 2955:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 2942:  /* avx512vl_us_truncatev2div2si2_mask */
    case 2941:  /* avx512vl_truncatev2div2si2_mask */
    case 2940:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 2927:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 2926:  /* avx512vl_truncatev2div2hi2_mask */
    case 2925:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 2909:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 2908:  /* avx512vl_truncatev4div4hi2_mask */
    case 2907:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 2906:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 2905:  /* avx512vl_truncatev4siv4hi2_mask */
    case 2904:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 2876:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 2875:  /* avx512vl_truncatev8siv8qi2_mask */
    case 2874:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 2873:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 2872:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 2871:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 2852:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 2851:  /* avx512vl_truncatev4div4qi2_mask */
    case 2850:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 2849:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 2848:  /* avx512vl_truncatev4siv4qi2_mask */
    case 2847:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 2834:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 2833:  /* avx512vl_truncatev2div2qi2_mask */
    case 2832:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2302:  /* ufloatv2div2sf2_mask */
    case 2301:  /* floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2214:  /* avx512dq_cvtps2uqqv2di_mask */
    case 2206:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4583:  /* avx512f_vcvtph2ps512_mask_round */
    case 4020:  /* avx512er_rsqrt28v8df_mask_round */
    case 4016:  /* avx512er_rsqrt28v16sf_mask_round */
    case 4008:  /* avx512er_rcp28v8df_mask_round */
    case 4004:  /* avx512er_rcp28v16sf_mask_round */
    case 4000:  /* avx512er_exp2v8df_mask_round */
    case 3996:  /* avx512er_exp2v16sf_mask_round */
    case 2642:  /* avx512vl_getexpv2df_mask_round */
    case 2638:  /* avx512vl_getexpv4df_mask_round */
    case 2634:  /* avx512f_getexpv8df_mask_round */
    case 2630:  /* avx512vl_getexpv4sf_mask_round */
    case 2626:  /* avx512vl_getexpv8sf_mask_round */
    case 2622:  /* avx512f_getexpv16sf_mask_round */
    case 2375:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2367:  /* fix_notruncv8dfv8di2_mask_round */
    case 2331:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2327:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2318:  /* avx512f_cvtpd2dq512_mask_round */
    case 2210:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 2202:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 2198:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 2194:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 2190:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 2186:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2258:  /* sse2_cvttsd2siq_round */
    case 2256:  /* sse2_cvttsd2si_round */
    case 2248:  /* avx512f_vcvttsd2usiq_round */
    case 2246:  /* avx512f_vcvttsd2usi_round */
    case 2240:  /* avx512f_vcvttss2usiq_round */
    case 2238:  /* avx512f_vcvttss2usi_round */
    case 2151:  /* sse_cvttss2siq_round */
    case 2149:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2253:  /* sse2_cvtsd2siq_round */
    case 2250:  /* sse2_cvtsd2si_round */
    case 2244:  /* avx512f_vcvtsd2usiq_round */
    case 2242:  /* avx512f_vcvtsd2usi_round */
    case 2236:  /* avx512f_vcvtss2usiq_round */
    case 2234:  /* avx512f_vcvtss2usi_round */
    case 2146:  /* sse_cvtss2siq_round */
    case 2143:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2405:  /* sse2_cvtss2sd_round */
    case 2403:  /* sse2_cvtsd2ss_round */
    case 2232:  /* sse2_cvtsi2sdq_round */
    case 2158:  /* cvtusi2sd64_round */
    case 2156:  /* cvtusi2ss64_round */
    case 2153:  /* cvtusi2ss32_round */
    case 2141:  /* sse_cvtsi2ssq_round */
    case 2139:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4574:  /* vcvtph2ps */
    case 3740:  /* *sse2_pmovmskb_zext */
    case 3739:  /* *avx2_pmovmskb_zext */
    case 3736:  /* *sse2_movmskpd_zext */
    case 3735:  /* *avx_movmskpd256_zext */
    case 3734:  /* *sse_movmskps_zext */
    case 3733:  /* *avx_movmskps256_zext */
    case 2332:  /* ufix_notruncv2dfv2si2 */
    case 2322:  /* sse2_cvtpd2dq */
    case 2136:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2404:  /* sse2_cvtss2sd */
    case 2402:  /* sse2_cvtsd2ss */
    case 2231:  /* sse2_cvtsi2sdq */
    case 2230:  /* sse2_cvtsi2sd */
    case 2157:  /* cvtusi2sd64 */
    case 2155:  /* cvtusi2ss64 */
    case 2154:  /* cvtusi2sd32 */
    case 2152:  /* cvtusi2ss32 */
    case 2140:  /* sse_cvtsi2ssq */
    case 2138:  /* sse_cvtsi2ss */
    case 2135:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 2134:  /* *fma4i_vmfnmsub_v2df */
    case 2133:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2132:  /* *fma4i_vmfnmadd_v2df */
    case 2131:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2130:  /* *fma4i_vmfmsub_v2df */
    case 2129:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2128:  /* *fma4i_vmfmadd_v2df */
    case 2127:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2126:  /* *fmai_fnmsub_v2df_round */
    case 2124:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2125:  /* *fmai_fnmsub_v2df */
    case 2123:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2122:  /* *fmai_fnmadd_v2df_round */
    case 2120:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2121:  /* *fmai_fnmadd_v2df */
    case 2119:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2118:  /* *fmai_fmsub_v2df */
    case 2116:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2117:  /* *fmai_fmsub_v2df */
    case 2115:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2114:  /* *fmai_fmadd_v2df */
    case 2112:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2113:  /* *fmai_fmadd_v2df */
    case 2111:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2110:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 2108:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 2106:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 2104:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 2102:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 2100:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2109:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 2107:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 2105:  /* avx512f_fmsubadd_v8df_mask3 */
    case 2103:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 2101:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 2099:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2098:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 2096:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 2094:  /* avx512f_fmsubadd_v8df_mask_round */
    case 2092:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 2090:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 2088:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2097:  /* avx512vl_fmsubadd_v2df_mask */
    case 2095:  /* avx512vl_fmsubadd_v4df_mask */
    case 2093:  /* avx512f_fmsubadd_v8df_mask */
    case 2091:  /* avx512vl_fmsubadd_v4sf_mask */
    case 2089:  /* avx512vl_fmsubadd_v8sf_mask */
    case 2087:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2082:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 2073:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2086:  /* fma_fmsubadd_v2df_maskz_1 */
    case 2084:  /* fma_fmsubadd_v4df_maskz_1 */
    case 2081:  /* fma_fmsubadd_v8df_maskz_1 */
    case 2077:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 2075:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 2072:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2080:  /* *fma_fmsubadd_v8df_round */
    case 2071:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2085:  /* *fma_fmsubadd_v2df */
    case 2083:  /* *fma_fmsubadd_v4df */
    case 2079:  /* *fma_fmsubadd_v8df */
    case 2078:  /* *fma_fmsubadd_df */
    case 2076:  /* *fma_fmsubadd_v4sf */
    case 2074:  /* *fma_fmsubadd_v8sf */
    case 2070:  /* *fma_fmsubadd_v16sf */
    case 2069:  /* *fma_fmsubadd_sf */
    case 2068:  /* *fma_fmsubadd_v2df */
    case 2067:  /* *fma_fmsubadd_v4df */
    case 2066:  /* *fma_fmsubadd_v4sf */
    case 2065:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 2064:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 2062:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 2060:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 2058:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 2056:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 2054:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2063:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 2061:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 2059:  /* avx512f_fmaddsub_v8df_mask3 */
    case 2057:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 2055:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 2053:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2052:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 2050:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 2048:  /* avx512f_fmaddsub_v8df_mask_round */
    case 2046:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 2044:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 2042:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4965:  /* vpamdd52huqv2di_mask */
    case 4964:  /* vpamdd52luqv2di_mask */
    case 4963:  /* vpamdd52huqv4di_mask */
    case 4962:  /* vpamdd52luqv4di_mask */
    case 4961:  /* vpamdd52huqv8di_mask */
    case 4960:  /* vpamdd52luqv8di_mask */
    case 2051:  /* avx512vl_fmaddsub_v2df_mask */
    case 2049:  /* avx512vl_fmaddsub_v4df_mask */
    case 2047:  /* avx512f_fmaddsub_v8df_mask */
    case 2045:  /* avx512vl_fmaddsub_v4sf_mask */
    case 2043:  /* avx512vl_fmaddsub_v8sf_mask */
    case 2041:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4854:  /* avx512dq_rangepv8df_mask_round */
    case 4846:  /* avx512dq_rangepv16sf_mask_round */
    case 2036:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 2027:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4959:  /* vpamdd52huqv2di_maskz_1 */
    case 4957:  /* vpamdd52luqv2di_maskz_1 */
    case 4955:  /* vpamdd52huqv4di_maskz_1 */
    case 4953:  /* vpamdd52luqv4di_maskz_1 */
    case 4951:  /* vpamdd52huqv8di_maskz_1 */
    case 4949:  /* vpamdd52luqv8di_maskz_1 */
    case 4910:  /* avx512bw_dbpsadbwv32hi_mask */
    case 4908:  /* avx512bw_dbpsadbwv16hi_mask */
    case 4906:  /* avx512bw_dbpsadbwv8hi_mask */
    case 4858:  /* avx512dq_rangepv2df_mask */
    case 4856:  /* avx512dq_rangepv4df_mask */
    case 4853:  /* avx512dq_rangepv8df_mask */
    case 4850:  /* avx512dq_rangepv4sf_mask */
    case 4848:  /* avx512dq_rangepv8sf_mask */
    case 4845:  /* avx512dq_rangepv16sf_mask */
    case 4438:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 4436:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 4434:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 4432:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 4430:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 4428:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 4426:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 4424:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 4422:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 4420:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 4418:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 4416:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 4414:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 4412:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 4410:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 4408:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 4406:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 4404:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 4384:  /* avx512bw_vpermi2varv32hi3_maskz_1 */
    case 4382:  /* avx512vl_vpermi2varv16hi3_maskz_1 */
    case 4380:  /* avx512vl_vpermi2varv8hi3_maskz_1 */
    case 4378:  /* avx512vl_vpermi2varv32qi3_maskz_1 */
    case 4376:  /* avx512vl_vpermi2varv16qi3_maskz_1 */
    case 4374:  /* avx512bw_vpermi2varv64qi3_maskz_1 */
    case 4372:  /* avx512vl_vpermi2varv2df3_maskz_1 */
    case 4370:  /* avx512vl_vpermi2varv2di3_maskz_1 */
    case 4368:  /* avx512vl_vpermi2varv4sf3_maskz_1 */
    case 4366:  /* avx512vl_vpermi2varv4si3_maskz_1 */
    case 4364:  /* avx512vl_vpermi2varv4df3_maskz_1 */
    case 4362:  /* avx512vl_vpermi2varv4di3_maskz_1 */
    case 4360:  /* avx512vl_vpermi2varv8sf3_maskz_1 */
    case 4358:  /* avx512vl_vpermi2varv8si3_maskz_1 */
    case 4356:  /* avx512f_vpermi2varv8df3_maskz_1 */
    case 4354:  /* avx512f_vpermi2varv8di3_maskz_1 */
    case 4352:  /* avx512f_vpermi2varv16sf3_maskz_1 */
    case 4350:  /* avx512f_vpermi2varv16si3_maskz_1 */
    case 3803:  /* ssse3_palignrv16qi_mask */
    case 3802:  /* avx2_palignrv32qi_mask */
    case 3801:  /* avx512bw_palignrv64qi_mask */
    case 2658:  /* avx512vl_alignv2di_mask */
    case 2656:  /* avx512vl_alignv4di_mask */
    case 2654:  /* avx512f_alignv8di_mask */
    case 2652:  /* avx512vl_alignv4si_mask */
    case 2650:  /* avx512vl_alignv8si_mask */
    case 2648:  /* avx512f_alignv16si_mask */
    case 2040:  /* fma_fmaddsub_v2df_maskz_1 */
    case 2038:  /* fma_fmaddsub_v4df_maskz_1 */
    case 2035:  /* fma_fmaddsub_v8df_maskz_1 */
    case 2031:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 2029:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 2026:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2018:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 2016:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 2014:  /* avx512f_fnmsub_v8df_mask3_round */
    case 2012:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 2010:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 2008:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2017:  /* avx512vl_fnmsub_v2df_mask3 */
    case 2015:  /* avx512vl_fnmsub_v4df_mask3 */
    case 2013:  /* avx512f_fnmsub_v8df_mask3 */
    case 2011:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 2009:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 2007:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2004:  /* avx512f_fnmsub_v8df_mask_round */
    case 2000:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2006:  /* avx512vl_fnmsub_v2df_mask */
    case 2005:  /* avx512vl_fnmsub_v4df_mask */
    case 2003:  /* avx512f_fnmsub_v8df_mask */
    case 2002:  /* avx512vl_fnmsub_v4sf_mask */
    case 2001:  /* avx512vl_fnmsub_v8sf_mask */
    case 1999:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1994:  /* fma_fnmsub_v8df_maskz_1_round */
    case 1985:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 1980:  /* *fma_fnmsub_v4df */
    case 1976:  /* *fma_fnmsub_v8sf */
    case 1972:  /* *fma_fnmsub_v2df */
    case 1968:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1998:  /* fma_fnmsub_v2df_maskz_1 */
    case 1996:  /* fma_fnmsub_v4df_maskz_1 */
    case 1993:  /* fma_fnmsub_v8df_maskz_1 */
    case 1989:  /* fma_fnmsub_v4sf_maskz_1 */
    case 1987:  /* fma_fnmsub_v8sf_maskz_1 */
    case 1984:  /* fma_fnmsub_v16sf_maskz_1 */
    case 1979:  /* *fma_fnmsub_v4df */
    case 1975:  /* *fma_fnmsub_v8sf */
    case 1971:  /* *fma_fnmsub_v2df */
    case 1967:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1992:  /* *fma_fnmsub_v8df_round */
    case 1983:  /* *fma_fnmsub_v16sf_round */
    case 1978:  /* *fma_fnmsub_v4df */
    case 1974:  /* *fma_fnmsub_v8sf */
    case 1970:  /* *fma_fnmsub_v2df */
    case 1966:  /* *fma_fnmsub_v4sf */
    case 1964:  /* *fma_fnmsub_df */
    case 1962:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1997:  /* *fma_fnmsub_v2df */
    case 1995:  /* *fma_fnmsub_v4df */
    case 1991:  /* *fma_fnmsub_v8df */
    case 1990:  /* *fma_fnmsub_df */
    case 1988:  /* *fma_fnmsub_v4sf */
    case 1986:  /* *fma_fnmsub_v8sf */
    case 1982:  /* *fma_fnmsub_v16sf */
    case 1981:  /* *fma_fnmsub_sf */
    case 1977:  /* *fma_fnmsub_v4df */
    case 1973:  /* *fma_fnmsub_v8sf */
    case 1969:  /* *fma_fnmsub_v2df */
    case 1965:  /* *fma_fnmsub_v4sf */
    case 1963:  /* *fma_fnmsub_df */
    case 1961:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1958:  /* avx512f_fnmadd_v8df_mask3_round */
    case 1954:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1960:  /* avx512vl_fnmadd_v2df_mask3 */
    case 1959:  /* avx512vl_fnmadd_v4df_mask3 */
    case 1957:  /* avx512f_fnmadd_v8df_mask3 */
    case 1956:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 1955:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 1953:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1950:  /* avx512f_fnmadd_v8df_mask_round */
    case 1946:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1952:  /* avx512vl_fnmadd_v2df_mask */
    case 1951:  /* avx512vl_fnmadd_v4df_mask */
    case 1949:  /* avx512f_fnmadd_v8df_mask */
    case 1948:  /* avx512vl_fnmadd_v4sf_mask */
    case 1947:  /* avx512vl_fnmadd_v8sf_mask */
    case 1945:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1940:  /* fma_fnmadd_v8df_maskz_1_round */
    case 1931:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1944:  /* fma_fnmadd_v2df_maskz_1 */
    case 1942:  /* fma_fnmadd_v4df_maskz_1 */
    case 1939:  /* fma_fnmadd_v8df_maskz_1 */
    case 1935:  /* fma_fnmadd_v4sf_maskz_1 */
    case 1933:  /* fma_fnmadd_v8sf_maskz_1 */
    case 1930:  /* fma_fnmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1918:  /* avx512f_fmsub_v8df_mask3_round */
    case 1914:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1920:  /* avx512vl_fmsub_v2df_mask3 */
    case 1919:  /* avx512vl_fmsub_v4df_mask3 */
    case 1917:  /* avx512f_fmsub_v8df_mask3 */
    case 1916:  /* avx512vl_fmsub_v4sf_mask3 */
    case 1915:  /* avx512vl_fmsub_v8sf_mask3 */
    case 1913:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1912:  /* avx512vl_fmsub_v2df_mask_round */
    case 1910:  /* avx512vl_fmsub_v4df_mask_round */
    case 1908:  /* avx512f_fmsub_v8df_mask_round */
    case 1906:  /* avx512vl_fmsub_v4sf_mask_round */
    case 1904:  /* avx512vl_fmsub_v8sf_mask_round */
    case 1902:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1911:  /* avx512vl_fmsub_v2df_mask */
    case 1909:  /* avx512vl_fmsub_v4df_mask */
    case 1907:  /* avx512f_fmsub_v8df_mask */
    case 1905:  /* avx512vl_fmsub_v4sf_mask */
    case 1903:  /* avx512vl_fmsub_v8sf_mask */
    case 1901:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1896:  /* fma_fmsub_v8df_maskz_1_round */
    case 1887:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1900:  /* fma_fmsub_v2df_maskz_1 */
    case 1898:  /* fma_fmsub_v4df_maskz_1 */
    case 1895:  /* fma_fmsub_v8df_maskz_1 */
    case 1891:  /* fma_fmsub_v4sf_maskz_1 */
    case 1889:  /* fma_fmsub_v8sf_maskz_1 */
    case 1886:  /* fma_fmsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1894:  /* *fma_fmsub_v8df_round */
    case 1885:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1899:  /* *fma_fmsub_v2df */
    case 1897:  /* *fma_fmsub_v4df */
    case 1893:  /* *fma_fmsub_v8df */
    case 1892:  /* *fma_fmsub_df */
    case 1890:  /* *fma_fmsub_v4sf */
    case 1888:  /* *fma_fmsub_v8sf */
    case 1884:  /* *fma_fmsub_v16sf */
    case 1883:  /* *fma_fmsub_sf */
    case 1882:  /* *fma_fmsub_v4df */
    case 1881:  /* *fma_fmsub_v8sf */
    case 1880:  /* *fma_fmsub_v2df */
    case 1879:  /* *fma_fmsub_v4sf */
    case 1878:  /* *fma_fmsub_df */
    case 1877:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1876:  /* avx512vl_fmadd_v2df_mask3_round */
    case 1874:  /* avx512vl_fmadd_v4df_mask3_round */
    case 1872:  /* avx512f_fmadd_v8df_mask3_round */
    case 1870:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 1868:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 1866:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1875:  /* avx512vl_fmadd_v2df_mask3 */
    case 1873:  /* avx512vl_fmadd_v4df_mask3 */
    case 1871:  /* avx512f_fmadd_v8df_mask3 */
    case 1869:  /* avx512vl_fmadd_v4sf_mask3 */
    case 1867:  /* avx512vl_fmadd_v8sf_mask3 */
    case 1865:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1862:  /* avx512f_fmadd_v8df_mask_round */
    case 1858:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1864:  /* avx512vl_fmadd_v2df_mask */
    case 1863:  /* avx512vl_fmadd_v4df_mask */
    case 1861:  /* avx512f_fmadd_v8df_mask */
    case 1860:  /* avx512vl_fmadd_v4sf_mask */
    case 1859:  /* avx512vl_fmadd_v8sf_mask */
    case 1857:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1852:  /* fma_fmadd_v8df_maskz_1_round */
    case 1843:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1856:  /* fma_fmadd_v2df_maskz_1 */
    case 1854:  /* fma_fmadd_v4df_maskz_1 */
    case 1851:  /* fma_fmadd_v8df_maskz_1 */
    case 1847:  /* fma_fmadd_v4sf_maskz_1 */
    case 1845:  /* fma_fmadd_v8sf_maskz_1 */
    case 1842:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1850:  /* *fma_fmadd_v8df_round */
    case 1841:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4484:  /* vec_set_hi_v8sf_mask */
    case 4482:  /* vec_set_hi_v8si_mask */
    case 4476:  /* vec_set_hi_v4df_mask */
    case 4474:  /* vec_set_hi_v4di_mask */
    case 3657:  /* vec_set_hi_v8di_mask */
    case 3655:  /* vec_set_hi_v8df_mask */
    case 3649:  /* vec_set_hi_v16si_mask */
    case 3647:  /* vec_set_hi_v16sf_mask */
    case 3455:  /* *andnotv2di3_mask */
    case 3454:  /* *andnotv4di3_mask */
    case 3453:  /* *andnotv8di3_mask */
    case 3452:  /* *andnotv4si3_mask */
    case 3451:  /* *andnotv8si3_mask */
    case 3450:  /* *andnotv16si3_mask */
    case 2413:  /* *sse2_cvtpd2ps_mask */
    case 1784:  /* avx512f_andnotv8df3_mask */
    case 1782:  /* avx512f_andnotv16sf3_mask */
    case 1780:  /* sse2_andnotv2df3_mask */
    case 1778:  /* avx_andnotv4df3_mask */
    case 1776:  /* sse_andnotv4sf3_mask */
    case 1774:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1772:  /* sse2_ucomi_round */
    case 1770:  /* sse_ucomi_round */
    case 1768:  /* sse2_comi_round */
    case 1766:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1771:  /* sse2_ucomi */
    case 1769:  /* sse_ucomi */
    case 1767:  /* sse2_comi */
    case 1765:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1758:  /* avx512f_vmcmpv2df3_mask_round */
    case 1756:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1757:  /* avx512f_vmcmpv2df3_mask */
    case 1755:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1754:  /* avx512f_vmcmpv2df3_round */
    case 1752:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1753:  /* avx512f_vmcmpv2df3 */
    case 1751:  /* avx512f_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1710:  /* avx512f_cmpv8df3_mask_round */
    case 1702:  /* avx512f_cmpv16sf3_mask_round */
    case 1694:  /* avx512f_cmpv8di3_mask_round */
    case 1686:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4852:  /* avx512dq_rangepv8df_round */
    case 4844:  /* avx512dq_rangepv16sf_round */
    case 2034:  /* *fma_fmaddsub_v8df_round */
    case 2025:  /* *fma_fmaddsub_v16sf_round */
    case 1709:  /* avx512f_cmpv8df3_round */
    case 1701:  /* avx512f_cmpv16sf3_round */
    case 1693:  /* avx512f_cmpv8di3_round */
    case 1685:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1750:  /* avx512vl_ucmpv2di3_mask */
    case 1748:  /* avx512vl_ucmpv4di3_mask */
    case 1746:  /* avx512f_ucmpv8di3_mask */
    case 1744:  /* avx512vl_ucmpv4si3_mask */
    case 1742:  /* avx512vl_ucmpv8si3_mask */
    case 1740:  /* avx512f_ucmpv16si3_mask */
    case 1738:  /* avx512vl_ucmpv8hi3_mask */
    case 1736:  /* avx512vl_ucmpv16hi3_mask */
    case 1734:  /* avx512bw_ucmpv32hi3_mask */
    case 1732:  /* avx512vl_ucmpv32qi3_mask */
    case 1730:  /* avx512vl_ucmpv16qi3_mask */
    case 1728:  /* avx512bw_ucmpv64qi3_mask */
    case 1726:  /* avx512vl_cmpv8hi3_mask */
    case 1724:  /* avx512vl_cmpv16hi3_mask */
    case 1722:  /* avx512bw_cmpv32hi3_mask */
    case 1720:  /* avx512vl_cmpv32qi3_mask */
    case 1718:  /* avx512vl_cmpv16qi3_mask */
    case 1716:  /* avx512bw_cmpv64qi3_mask */
    case 1714:  /* avx512vl_cmpv2df3_mask */
    case 1712:  /* avx512vl_cmpv4df3_mask */
    case 1708:  /* avx512f_cmpv8df3_mask */
    case 1706:  /* avx512vl_cmpv4sf3_mask */
    case 1704:  /* avx512vl_cmpv8sf3_mask */
    case 1700:  /* avx512f_cmpv16sf3_mask */
    case 1698:  /* avx512vl_cmpv2di3_mask */
    case 1696:  /* avx512vl_cmpv4di3_mask */
    case 1692:  /* avx512f_cmpv8di3_mask */
    case 1690:  /* avx512vl_cmpv4si3_mask */
    case 1688:  /* avx512vl_cmpv8si3_mask */
    case 1684:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1682:  /* sse2_vmmaskcmpv2df3 */
    case 1681:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4903:  /* avx512f_vgetmantv2df */
    case 4901:  /* avx512f_vgetmantv4sf */
    case 4861:  /* avx512dq_rangesv2df */
    case 4859:  /* avx512dq_rangesv4sf */
    case 2733:  /* avx512f_rndscalev2df */
    case 2731:  /* avx512f_rndscalev4sf */
    case 1672:  /* avx_vmcmpv2df3 */
    case 1671:  /* avx_vmcmpv4sf3 */
    case 1666:  /* reducesv2df */
    case 1665:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3764:  /* ssse3_phsubdv4si3 */
    case 3763:  /* ssse3_phadddv4si3 */
    case 3760:  /* ssse3_phsubswv4hi3 */
    case 3759:  /* ssse3_phsubwv4hi3 */
    case 3758:  /* ssse3_phaddswv4hi3 */
    case 3757:  /* ssse3_phaddwv4hi3 */
    case 1652:  /* sse3_hsubv4sf3 */
    case 1651:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1650:  /* avx_hsubv8sf3 */
    case 1649:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1648:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1647:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1645:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1644:  /* avx_hsubv4df3 */
    case 1643:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4900:  /* avx512vl_getmantv2df_mask_round */
    case 4896:  /* avx512vl_getmantv4df_mask_round */
    case 4892:  /* avx512f_getmantv8df_mask_round */
    case 4888:  /* avx512vl_getmantv4sf_mask_round */
    case 4884:  /* avx512vl_getmantv8sf_mask_round */
    case 4880:  /* avx512f_getmantv16sf_mask_round */
    case 2730:  /* avx512vl_rndscalev2df_mask_round */
    case 2726:  /* avx512vl_rndscalev4df_mask_round */
    case 2722:  /* avx512f_rndscalev8df_mask_round */
    case 2718:  /* avx512vl_rndscalev4sf_mask_round */
    case 2714:  /* avx512vl_rndscalev8sf_mask_round */
    case 2710:  /* avx512f_rndscalev16sf_mask_round */
    case 2600:  /* avx512vl_scalefv2df_mask_round */
    case 2596:  /* avx512vl_scalefv4df_mask_round */
    case 2592:  /* avx512f_scalefv8df_mask_round */
    case 2588:  /* avx512vl_scalefv4sf_mask_round */
    case 2584:  /* avx512vl_scalefv8sf_mask_round */
    case 2580:  /* avx512f_scalefv16sf_mask_round */
    case 1622:  /* ieee_minv8df3_mask_round */
    case 1618:  /* ieee_maxv8df3_mask_round */
    case 1606:  /* ieee_minv16sf3_mask_round */
    case 1602:  /* ieee_maxv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4971:  /* vpmultishiftqbv32qi_mask */
    case 4969:  /* vpmultishiftqbv16qi_mask */
    case 4967:  /* vpmultishiftqbv64qi_mask */
    case 4899:  /* avx512vl_getmantv2df_mask */
    case 4895:  /* avx512vl_getmantv4df_mask */
    case 4891:  /* avx512f_getmantv8df_mask */
    case 4887:  /* avx512vl_getmantv4sf_mask */
    case 4883:  /* avx512vl_getmantv8sf_mask */
    case 4879:  /* avx512f_getmantv16sf_mask */
    case 4590:  /* avx512f_vcvtps2ph512_mask */
    case 4588:  /* vcvtps2ph256_mask */
    case 4348:  /* avx_vpermilvarv2df3_mask */
    case 4346:  /* avx_vpermilvarv4df3_mask */
    case 4344:  /* avx512f_vpermilvarv8df3_mask */
    case 4342:  /* avx_vpermilvarv4sf3_mask */
    case 4340:  /* avx_vpermilvarv8sf3_mask */
    case 4338:  /* avx512f_vpermilvarv16sf3_mask */
    case 4172:  /* avx512bw_permvarv32hi_mask */
    case 4170:  /* avx512vl_permvarv16hi_mask */
    case 4168:  /* avx512vl_permvarv8hi_mask */
    case 4166:  /* avx512vl_permvarv32qi_mask */
    case 4164:  /* avx512vl_permvarv16qi_mask */
    case 4162:  /* avx512bw_permvarv64qi_mask */
    case 4160:  /* avx2_permvarv4df_mask */
    case 4158:  /* avx2_permvarv4di_mask */
    case 4156:  /* avx512f_permvarv8df_mask */
    case 4154:  /* avx512f_permvarv8di_mask */
    case 4152:  /* avx512f_permvarv16sf_mask */
    case 4150:  /* avx512f_permvarv16si_mask */
    case 4148:  /* avx2_permvarv8sf_mask */
    case 4146:  /* avx2_permvarv8si_mask */
    case 3790:  /* ssse3_pshufbv16qi3_mask */
    case 3788:  /* avx2_pshufbv32qi3_mask */
    case 3786:  /* avx512bw_pshufbv64qi3_mask */
    case 3773:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 3771:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 3769:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 3687:  /* avx512bw_pshufhwv32hi_mask */
    case 3681:  /* avx512bw_pshuflwv32hi_mask */
    case 3119:  /* avx512bw_pmaddwd512v8hi_mask */
    case 3117:  /* avx512bw_pmaddwd512v16hi_mask */
    case 3115:  /* avx512bw_pmaddwd512v32hi_mask */
    case 2729:  /* avx512vl_rndscalev2df_mask */
    case 2725:  /* avx512vl_rndscalev4df_mask */
    case 2721:  /* avx512f_rndscalev8df_mask */
    case 2717:  /* avx512vl_rndscalev4sf_mask */
    case 2713:  /* avx512vl_rndscalev8sf_mask */
    case 2709:  /* avx512f_rndscalev16sf_mask */
    case 2599:  /* avx512vl_scalefv2df_mask */
    case 2595:  /* avx512vl_scalefv4df_mask */
    case 2591:  /* avx512f_scalefv8df_mask */
    case 2587:  /* avx512vl_scalefv4sf_mask */
    case 2583:  /* avx512vl_scalefv8sf_mask */
    case 2579:  /* avx512f_scalefv16sf_mask */
    case 1664:  /* reducepv2df_mask */
    case 1662:  /* reducepv4df_mask */
    case 1660:  /* reducepv8df_mask */
    case 1658:  /* reducepv4sf_mask */
    case 1656:  /* reducepv8sf_mask */
    case 1654:  /* reducepv16sf_mask */
    case 1630:  /* ieee_minv2df3_mask */
    case 1628:  /* ieee_maxv2df3_mask */
    case 1626:  /* ieee_minv4df3_mask */
    case 1624:  /* ieee_maxv4df3_mask */
    case 1621:  /* ieee_minv8df3_mask */
    case 1617:  /* ieee_maxv8df3_mask */
    case 1614:  /* ieee_minv4sf3_mask */
    case 1612:  /* ieee_maxv4sf3_mask */
    case 1610:  /* ieee_minv8sf3_mask */
    case 1608:  /* ieee_maxv8sf3_mask */
    case 1605:  /* ieee_minv16sf3_mask */
    case 1601:  /* ieee_maxv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4898:  /* avx512vl_getmantv2df_round */
    case 4894:  /* avx512vl_getmantv4df_round */
    case 4890:  /* avx512f_getmantv8df_round */
    case 4886:  /* avx512vl_getmantv4sf_round */
    case 4882:  /* avx512vl_getmantv8sf_round */
    case 4878:  /* avx512f_getmantv16sf_round */
    case 2728:  /* avx512vl_rndscalev2df_round */
    case 2724:  /* avx512vl_rndscalev4df_round */
    case 2720:  /* avx512f_rndscalev8df_round */
    case 2716:  /* avx512vl_rndscalev4sf_round */
    case 2712:  /* avx512vl_rndscalev8sf_round */
    case 2708:  /* avx512f_rndscalev16sf_round */
    case 2598:  /* avx512vl_scalefv2df_round */
    case 2594:  /* avx512vl_scalefv4df_round */
    case 2590:  /* avx512f_scalefv8df_round */
    case 2586:  /* avx512vl_scalefv4sf_round */
    case 2582:  /* avx512vl_scalefv8sf_round */
    case 2578:  /* avx512f_scalefv16sf_round */
    case 1620:  /* ieee_minv8df3_round */
    case 1616:  /* ieee_maxv8df3_round */
    case 1604:  /* ieee_minv16sf3_round */
    case 1600:  /* ieee_maxv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1533:  /* sse2_vmsqrtv2df2_round */
    case 1531:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2417:  /* avx512f_cvtps2pd512_mask_round */
    case 2409:  /* avx512f_cvtpd2ps512_mask_round */
    case 2387:  /* ufix_truncv8sfv8di2_mask_round */
    case 2383:  /* fix_truncv8sfv8di2_mask_round */
    case 2355:  /* ufix_truncv8dfv8di2_mask_round */
    case 2351:  /* fix_truncv8dfv8di2_mask_round */
    case 2341:  /* ufix_truncv8dfv8si2_mask_round */
    case 2337:  /* fix_truncv8dfv8si2_mask_round */
    case 2294:  /* ufloatv8div8sf2_mask_round */
    case 2290:  /* floatv8div8sf2_mask_round */
    case 2286:  /* ufloatv2div2df2_mask_round */
    case 2282:  /* floatv2div2df2_mask_round */
    case 2278:  /* ufloatv4div4df2_mask_round */
    case 2274:  /* floatv4div4df2_mask_round */
    case 2270:  /* ufloatv8div8df2_mask_round */
    case 2266:  /* floatv8div8df2_mask_round */
    case 2222:  /* ufix_truncv16sfv16si2_mask_round */
    case 2218:  /* fix_truncv16sfv16si2_mask_round */
    case 2178:  /* ufloatv4siv4sf2_mask_round */
    case 2174:  /* ufloatv8siv8sf2_mask_round */
    case 2170:  /* ufloatv16siv16sf2_mask_round */
    case 2162:  /* floatv16siv16sf2_mask_round */
    case 1938:  /* *fma_fnmadd_v8df_round */
    case 1929:  /* *fma_fnmadd_v16sf_round */
    case 1525:  /* avx512f_sqrtv8df2_mask_round */
    case 1517:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4922:  /* clzv2di2_mask */
    case 4920:  /* clzv4di2_mask */
    case 4918:  /* clzv8di2_mask */
    case 4916:  /* clzv4si2_mask */
    case 4914:  /* clzv8si2_mask */
    case 4912:  /* clzv16si2_mask */
    case 4315:  /* avx512dq_broadcastv4df_mask_1 */
    case 4313:  /* avx512dq_broadcastv4di_mask_1 */
    case 4311:  /* avx512dq_broadcastv8df_mask_1 */
    case 4309:  /* avx512dq_broadcastv8di_mask_1 */
    case 4307:  /* avx512dq_broadcastv16si_mask_1 */
    case 4305:  /* avx512dq_broadcastv16sf_mask_1 */
    case 4303:  /* avx512vl_broadcastv8sf_mask_1 */
    case 4301:  /* avx512vl_broadcastv8si_mask_1 */
    case 4266:  /* avx512vl_vec_dup_gprv2df_mask */
    case 4264:  /* avx512vl_vec_dup_gprv4df_mask */
    case 4262:  /* avx512f_vec_dup_gprv8df_mask */
    case 4260:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 4258:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 4256:  /* avx512f_vec_dup_gprv16sf_mask */
    case 4254:  /* avx512vl_vec_dup_gprv2di_mask */
    case 4252:  /* avx512vl_vec_dup_gprv4di_mask */
    case 4250:  /* avx512f_vec_dup_gprv8di_mask */
    case 4248:  /* avx512vl_vec_dup_gprv4si_mask */
    case 4246:  /* avx512vl_vec_dup_gprv8si_mask */
    case 4244:  /* avx512f_vec_dup_gprv16si_mask */
    case 4242:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 4240:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 4238:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 4236:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 4234:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 4232:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 4230:  /* avx512f_broadcastv8di_mask */
    case 4228:  /* avx512f_broadcastv8df_mask */
    case 4226:  /* avx512f_broadcastv16si_mask */
    case 4224:  /* avx512f_broadcastv16sf_mask */
    case 3940:  /* avx2_zero_extendv4siv4di2_mask */
    case 3938:  /* avx2_sign_extendv4siv4di2_mask */
    case 3936:  /* avx512f_zero_extendv8siv8di2_mask */
    case 3934:  /* avx512f_sign_extendv8siv8di2_mask */
    case 3924:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 3922:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 3904:  /* avx2_zero_extendv8hiv8si2_mask */
    case 3902:  /* avx2_sign_extendv8hiv8si2_mask */
    case 3900:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 3898:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 3888:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 3886:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 3880:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 3878:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 3876:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 3874:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 3831:  /* absv8hi2_mask */
    case 3830:  /* absv16hi2_mask */
    case 3829:  /* absv32hi2_mask */
    case 3828:  /* absv32qi2_mask */
    case 3827:  /* absv16qi2_mask */
    case 3826:  /* absv64qi2_mask */
    case 3825:  /* absv2di2_mask */
    case 3824:  /* absv4di2_mask */
    case 3823:  /* absv8di2_mask */
    case 3822:  /* absv4si2_mask */
    case 3821:  /* absv8si2_mask */
    case 3820:  /* absv16si2_mask */
    case 2813:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 2812:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 2811:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 2810:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 2809:  /* avx512vl_truncatev8siv8hi2_mask */
    case 2808:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 2807:  /* avx512vl_us_truncatev4div4si2_mask */
    case 2806:  /* avx512vl_truncatev4div4si2_mask */
    case 2805:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 2795:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 2794:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 2793:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 2789:  /* avx512f_us_truncatev8div8hi2_mask */
    case 2788:  /* avx512f_truncatev8div8hi2_mask */
    case 2787:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 2786:  /* avx512f_us_truncatev8div8si2_mask */
    case 2785:  /* avx512f_truncatev8div8si2_mask */
    case 2784:  /* avx512f_ss_truncatev8div8si2_mask */
    case 2783:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 2782:  /* avx512f_truncatev16siv16hi2_mask */
    case 2781:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 2780:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 2779:  /* avx512f_truncatev16siv16qi2_mask */
    case 2778:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 2764:  /* vec_dupv2df_mask */
    case 2550:  /* vec_extract_hi_v8sf_mask */
    case 2549:  /* vec_extract_hi_v8si_mask */
    case 2548:  /* vec_extract_hi_v8sf_maskm */
    case 2547:  /* vec_extract_hi_v8si_maskm */
    case 2546:  /* vec_extract_lo_v8sf_maskm */
    case 2545:  /* vec_extract_lo_v8si_maskm */
    case 2544:  /* vec_extract_lo_v8sf_mask */
    case 2542:  /* vec_extract_lo_v8si_mask */
    case 2540:  /* vec_extract_hi_v4df_mask */
    case 2538:  /* vec_extract_hi_v4di_mask */
    case 2536:  /* vec_extract_lo_v4df_mask */
    case 2534:  /* vec_extract_lo_v4di_mask */
    case 2532:  /* vec_extract_lo_v16si_mask */
    case 2530:  /* vec_extract_lo_v16sf_mask */
    case 2528:  /* vec_extract_hi_v16si_mask */
    case 2526:  /* vec_extract_hi_v16sf_mask */
    case 2524:  /* vec_extract_hi_v16si_maskm */
    case 2523:  /* vec_extract_hi_v16sf_maskm */
    case 2522:  /* vec_extract_hi_v8di_mask */
    case 2520:  /* vec_extract_hi_v8df_mask */
    case 2518:  /* vec_extract_hi_v8di_maskm */
    case 2517:  /* vec_extract_hi_v8df_maskm */
    case 2516:  /* vec_extract_lo_v8di_mask */
    case 2514:  /* vec_extract_lo_v8df_mask */
    case 2512:  /* vec_extract_lo_v8di_maskm */
    case 2511:  /* vec_extract_lo_v8df_maskm */
    case 2419:  /* avx_cvtps2pd256_mask */
    case 2416:  /* avx512f_cvtps2pd512_mask */
    case 2411:  /* avx_cvtpd2ps256_mask */
    case 2408:  /* avx512f_cvtpd2ps512_mask */
    case 2399:  /* ufix_truncv4sfv4si2_mask */
    case 2397:  /* ufix_truncv8sfv8si2_mask */
    case 2391:  /* ufix_truncv4sfv4di2_mask */
    case 2389:  /* fix_truncv4sfv4di2_mask */
    case 2386:  /* ufix_truncv8sfv8di2_mask */
    case 2382:  /* fix_truncv8sfv8di2_mask */
    case 2363:  /* ufix_truncv2dfv2di2_mask */
    case 2361:  /* fix_truncv2dfv2di2_mask */
    case 2359:  /* ufix_truncv4dfv4di2_mask */
    case 2357:  /* fix_truncv4dfv4di2_mask */
    case 2354:  /* ufix_truncv8dfv8di2_mask */
    case 2350:  /* fix_truncv8dfv8di2_mask */
    case 2347:  /* ufix_truncv4dfv4si2_mask */
    case 2345:  /* fix_truncv4dfv4si2_mask */
    case 2340:  /* ufix_truncv8dfv8si2_mask */
    case 2336:  /* fix_truncv8dfv8si2_mask */
    case 2308:  /* ufloatv4siv4df2_mask */
    case 2306:  /* ufloatv8siv8df2_mask */
    case 2298:  /* ufloatv4div4sf2_mask */
    case 2296:  /* floatv4div4sf2_mask */
    case 2293:  /* ufloatv8div8sf2_mask */
    case 2289:  /* floatv8div8sf2_mask */
    case 2285:  /* ufloatv2div2df2_mask */
    case 2281:  /* floatv2div2df2_mask */
    case 2277:  /* ufloatv4div4df2_mask */
    case 2273:  /* floatv4div4df2_mask */
    case 2269:  /* ufloatv8div8df2_mask */
    case 2265:  /* floatv8div8df2_mask */
    case 2262:  /* floatv4siv4df2_mask */
    case 2260:  /* floatv8siv8df2_mask */
    case 2226:  /* fix_truncv4sfv4si2_mask */
    case 2224:  /* fix_truncv8sfv8si2_mask */
    case 2221:  /* ufix_truncv16sfv16si2_mask */
    case 2217:  /* fix_truncv16sfv16si2_mask */
    case 2177:  /* ufloatv4siv4sf2_mask */
    case 2173:  /* ufloatv8siv8sf2_mask */
    case 2169:  /* ufloatv16siv16sf2_mask */
    case 2166:  /* floatv4siv4sf2_mask */
    case 2164:  /* floatv8siv8sf2_mask */
    case 2161:  /* floatv16siv16sf2_mask */
    case 1943:  /* *fma_fnmadd_v2df */
    case 1941:  /* *fma_fnmadd_v4df */
    case 1937:  /* *fma_fnmadd_v8df */
    case 1936:  /* *fma_fnmadd_df */
    case 1934:  /* *fma_fnmadd_v4sf */
    case 1932:  /* *fma_fnmadd_v8sf */
    case 1928:  /* *fma_fnmadd_v16sf */
    case 1927:  /* *fma_fnmadd_sf */
    case 1926:  /* *fma_fnmadd_v4df */
    case 1925:  /* *fma_fnmadd_v8sf */
    case 1924:  /* *fma_fnmadd_v2df */
    case 1923:  /* *fma_fnmadd_v4sf */
    case 1922:  /* *fma_fnmadd_df */
    case 1921:  /* *fma_fnmadd_sf */
    case 1529:  /* sse2_sqrtv2df2_mask */
    case 1527:  /* avx_sqrtv4df2_mask */
    case 1524:  /* avx512f_sqrtv8df2_mask */
    case 1521:  /* sse_sqrtv4sf2_mask */
    case 1519:  /* avx_sqrtv8sf2_mask */
    case 1516:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4099:  /* *xop_vmfrczv2df2 */
    case 4098:  /* *xop_vmfrczv4sf2 */
    case 4023:  /* avx512er_vmrsqrt28v2df */
    case 4021:  /* avx512er_vmrsqrt28v4sf */
    case 4011:  /* avx512er_vmrcp28v2df */
    case 4009:  /* avx512er_vmrcp28v4sf */
    case 2321:  /* *avx_cvtpd2dq256_2 */
    case 1550:  /* sse_vmrsqrtv4sf2 */
    case 1549:  /* rsqrt14v2df */
    case 1548:  /* rsqrt14v4sf */
    case 1513:  /* srcp14v2df */
    case 1512:  /* srcp14v4sf */
    case 1499:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1638:  /* sse2_vmsminv2df3_round */
    case 1636:  /* sse2_vmsmaxv2df3_round */
    case 1634:  /* sse_vmsminv4sf3_round */
    case 1632:  /* sse_vmsmaxv4sf3_round */
    case 1480:  /* sse2_vmdivv2df3_round */
    case 1478:  /* sse2_vmmulv2df3_round */
    case 1476:  /* sse_vmdivv4sf3_round */
    case 1474:  /* sse_vmmulv4sf3_round */
    case 1448:  /* sse2_vmsubv2df3_round */
    case 1446:  /* sse2_vmaddv2df3_round */
    case 1444:  /* sse_vmsubv4sf3_round */
    case 1442:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1637:  /* sse2_vmsminv2df3 */
    case 1635:  /* sse2_vmsmaxv2df3 */
    case 1633:  /* sse_vmsminv4sf3 */
    case 1631:  /* sse_vmsmaxv4sf3 */
    case 1479:  /* sse2_vmdivv2df3 */
    case 1477:  /* sse2_vmmulv2df3 */
    case 1475:  /* sse_vmdivv4sf3 */
    case 1473:  /* sse_vmmulv4sf3 */
    case 1447:  /* sse2_vmsubv2df3 */
    case 1445:  /* sse2_vmaddv2df3 */
    case 1443:  /* sse_vmsubv4sf3 */
    case 1441:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1598:  /* *sminv2df3_mask_round */
    case 1594:  /* *smaxv2df3_mask_round */
    case 1590:  /* *sminv4df3_mask_round */
    case 1586:  /* *smaxv4df3_mask_round */
    case 1582:  /* *sminv8df3_mask_round */
    case 1578:  /* *smaxv8df3_mask_round */
    case 1574:  /* *sminv4sf3_mask_round */
    case 1570:  /* *smaxv4sf3_mask_round */
    case 1566:  /* *sminv8sf3_mask_round */
    case 1562:  /* *smaxv8sf3_mask_round */
    case 1558:  /* *sminv16sf3_mask_round */
    case 1554:  /* *smaxv16sf3_mask_round */
    case 1492:  /* avx512f_divv8df3_mask_round */
    case 1484:  /* avx512f_divv16sf3_mask_round */
    case 1472:  /* *mulv2df3_mask_round */
    case 1468:  /* *mulv4df3_mask_round */
    case 1464:  /* *mulv8df3_mask_round */
    case 1460:  /* *mulv4sf3_mask_round */
    case 1456:  /* *mulv8sf3_mask_round */
    case 1452:  /* *mulv16sf3_mask_round */
    case 1440:  /* *subv2df3_mask_round */
    case 1436:  /* *addv2df3_mask_round */
    case 1432:  /* *subv4df3_mask_round */
    case 1428:  /* *addv4df3_mask_round */
    case 1424:  /* *subv8df3_mask_round */
    case 1420:  /* *addv8df3_mask_round */
    case 1416:  /* *subv4sf3_mask_round */
    case 1412:  /* *addv4sf3_mask_round */
    case 1408:  /* *subv8sf3_mask_round */
    case 1404:  /* *addv8sf3_mask_round */
    case 1400:  /* *subv16sf3_mask_round */
    case 1396:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4561:  /* avx512bw_lshrvv32hi_mask */
    case 4559:  /* avx512bw_ashlvv32hi_mask */
    case 4557:  /* avx512vl_lshrvv16hi_mask */
    case 4555:  /* avx512vl_ashlvv16hi_mask */
    case 4553:  /* avx512vl_lshrvv8hi_mask */
    case 4551:  /* avx512vl_ashlvv8hi_mask */
    case 4549:  /* avx2_lshrvv2di_mask */
    case 4547:  /* avx2_ashlvv2di_mask */
    case 4545:  /* avx2_lshrvv4di_mask */
    case 4543:  /* avx2_ashlvv4di_mask */
    case 4541:  /* avx512f_lshrvv8di_mask */
    case 4539:  /* avx512f_ashlvv8di_mask */
    case 4537:  /* avx2_lshrvv4si_mask */
    case 4535:  /* avx2_ashlvv4si_mask */
    case 4533:  /* avx2_lshrvv8si_mask */
    case 4531:  /* avx2_ashlvv8si_mask */
    case 4529:  /* avx512f_lshrvv16si_mask */
    case 4527:  /* avx512f_ashlvv16si_mask */
    case 4525:  /* avx512bw_ashrvv32hi_mask */
    case 4523:  /* avx512vl_ashrvv16hi_mask */
    case 4521:  /* avx512vl_ashrvv8hi_mask */
    case 4519:  /* avx512f_ashrvv8di_mask */
    case 4517:  /* avx2_ashrvv4di_mask */
    case 4515:  /* avx2_ashrvv2di_mask */
    case 4513:  /* avx512f_ashrvv16si_mask */
    case 4511:  /* avx2_ashrvv8si_mask */
    case 4509:  /* avx2_ashrvv4si_mask */
    case 3527:  /* *xorv8hi3 */
    case 3525:  /* *iorv8hi3 */
    case 3523:  /* *andv8hi3 */
    case 3521:  /* *xorv16hi3 */
    case 3519:  /* *iorv16hi3 */
    case 3517:  /* *andv16hi3 */
    case 3515:  /* *xorv32hi3 */
    case 3513:  /* *iorv32hi3 */
    case 3511:  /* *andv32hi3 */
    case 3509:  /* *xorv16qi3 */
    case 3507:  /* *iorv16qi3 */
    case 3505:  /* *andv16qi3 */
    case 3503:  /* *xorv32qi3 */
    case 3501:  /* *iorv32qi3 */
    case 3499:  /* *andv32qi3 */
    case 3497:  /* *xorv64qi3 */
    case 3495:  /* *iorv64qi3 */
    case 3493:  /* *andv64qi3 */
    case 3491:  /* xorv2di3_mask */
    case 3489:  /* iorv2di3_mask */
    case 3487:  /* andv2di3_mask */
    case 3485:  /* xorv4di3_mask */
    case 3483:  /* iorv4di3_mask */
    case 3481:  /* andv4di3_mask */
    case 3479:  /* xorv8di3_mask */
    case 3477:  /* iorv8di3_mask */
    case 3475:  /* andv8di3_mask */
    case 3473:  /* xorv4si3_mask */
    case 3471:  /* iorv4si3_mask */
    case 3469:  /* andv4si3_mask */
    case 3467:  /* xorv8si3_mask */
    case 3465:  /* iorv8si3_mask */
    case 3463:  /* andv8si3_mask */
    case 3461:  /* xorv16si3_mask */
    case 3459:  /* iorv16si3_mask */
    case 3457:  /* andv16si3_mask */
    case 3371:  /* *sse4_1_uminv4si3_mask */
    case 3369:  /* *sse4_1_umaxv4si3_mask */
    case 3367:  /* *sse4_1_uminv8hi3_mask */
    case 3365:  /* *sse4_1_umaxv8hi3_mask */
    case 3361:  /* *sse4_1_sminv4si3_mask */
    case 3359:  /* *sse4_1_smaxv4si3_mask */
    case 3357:  /* *sse4_1_sminv16qi3_mask */
    case 3355:  /* *sse4_1_smaxv16qi3_mask */
    case 3353:  /* uminv8hi3_mask */
    case 3351:  /* umaxv8hi3_mask */
    case 3349:  /* sminv8hi3_mask */
    case 3347:  /* smaxv8hi3_mask */
    case 3345:  /* uminv16hi3_mask */
    case 3343:  /* umaxv16hi3_mask */
    case 3341:  /* sminv16hi3_mask */
    case 3339:  /* smaxv16hi3_mask */
    case 3337:  /* uminv32hi3_mask */
    case 3335:  /* umaxv32hi3_mask */
    case 3333:  /* sminv32hi3_mask */
    case 3331:  /* smaxv32hi3_mask */
    case 3329:  /* uminv32qi3_mask */
    case 3327:  /* umaxv32qi3_mask */
    case 3325:  /* sminv32qi3_mask */
    case 3323:  /* smaxv32qi3_mask */
    case 3321:  /* uminv16qi3_mask */
    case 3319:  /* umaxv16qi3_mask */
    case 3317:  /* sminv16qi3_mask */
    case 3315:  /* smaxv16qi3_mask */
    case 3313:  /* uminv64qi3_mask */
    case 3311:  /* umaxv64qi3_mask */
    case 3309:  /* sminv64qi3_mask */
    case 3307:  /* smaxv64qi3_mask */
    case 3305:  /* *avx512f_uminv2di3_mask */
    case 3303:  /* *avx512f_umaxv2di3_mask */
    case 3301:  /* *avx512f_sminv2di3_mask */
    case 3299:  /* *avx512f_smaxv2di3_mask */
    case 3297:  /* *avx512f_uminv4di3_mask */
    case 3295:  /* *avx512f_umaxv4di3_mask */
    case 3293:  /* *avx512f_sminv4di3_mask */
    case 3291:  /* *avx512f_smaxv4di3_mask */
    case 3289:  /* *avx512f_uminv8di3_mask */
    case 3287:  /* *avx512f_umaxv8di3_mask */
    case 3285:  /* *avx512f_sminv8di3_mask */
    case 3283:  /* *avx512f_smaxv8di3_mask */
    case 3281:  /* *avx512f_uminv4si3_mask */
    case 3279:  /* *avx512f_umaxv4si3_mask */
    case 3277:  /* *avx512f_sminv4si3_mask */
    case 3275:  /* *avx512f_smaxv4si3_mask */
    case 3273:  /* *avx512f_uminv8si3_mask */
    case 3271:  /* *avx512f_umaxv8si3_mask */
    case 3269:  /* *avx512f_sminv8si3_mask */
    case 3267:  /* *avx512f_smaxv8si3_mask */
    case 3265:  /* *avx512f_uminv16si3_mask */
    case 3263:  /* *avx512f_umaxv16si3_mask */
    case 3261:  /* *avx512f_sminv16si3_mask */
    case 3259:  /* *avx512f_smaxv16si3_mask */
    case 3245:  /* avx512vl_rorv2di_mask */
    case 3243:  /* avx512vl_rolv2di_mask */
    case 3241:  /* avx512vl_rorv4di_mask */
    case 3239:  /* avx512vl_rolv4di_mask */
    case 3237:  /* avx512f_rorv8di_mask */
    case 3235:  /* avx512f_rolv8di_mask */
    case 3233:  /* avx512vl_rorv4si_mask */
    case 3231:  /* avx512vl_rolv4si_mask */
    case 3229:  /* avx512vl_rorv8si_mask */
    case 3227:  /* avx512vl_rolv8si_mask */
    case 3225:  /* avx512f_rorv16si_mask */
    case 3223:  /* avx512f_rolv16si_mask */
    case 3221:  /* avx512vl_rorvv2di_mask */
    case 3219:  /* avx512vl_rolvv2di_mask */
    case 3217:  /* avx512vl_rorvv4di_mask */
    case 3215:  /* avx512vl_rolvv4di_mask */
    case 3213:  /* avx512f_rorvv8di_mask */
    case 3211:  /* avx512f_rolvv8di_mask */
    case 3209:  /* avx512vl_rorvv4si_mask */
    case 3207:  /* avx512vl_rolvv4si_mask */
    case 3205:  /* avx512vl_rorvv8si_mask */
    case 3203:  /* avx512vl_rolvv8si_mask */
    case 3201:  /* avx512f_rorvv16si_mask */
    case 3199:  /* avx512f_rolvv16si_mask */
    case 3191:  /* lshrv8di3_mask */
    case 3189:  /* ashlv8di3_mask */
    case 3187:  /* lshrv16si3_mask */
    case 3185:  /* ashlv16si3_mask */
    case 3183:  /* lshrv2di3_mask */
    case 3181:  /* ashlv2di3_mask */
    case 3179:  /* lshrv4di3_mask */
    case 3177:  /* ashlv4di3_mask */
    case 3175:  /* lshrv4si3_mask */
    case 3173:  /* ashlv4si3_mask */
    case 3171:  /* lshrv8si3_mask */
    case 3169:  /* ashlv8si3_mask */
    case 3167:  /* lshrv8hi3_mask */
    case 3165:  /* ashlv8hi3_mask */
    case 3163:  /* lshrv16hi3_mask */
    case 3161:  /* ashlv16hi3_mask */
    case 3159:  /* lshrv32hi3_mask */
    case 3157:  /* ashlv32hi3_mask */
    case 3155:  /* ashrv8di3_mask */
    case 3153:  /* ashrv16si3_mask */
    case 3151:  /* ashrv4di3_mask */
    case 3149:  /* ashrv32hi3_mask */
    case 3147:  /* ashrv2di3_mask */
    case 3145:  /* ashrv4si3_mask */
    case 3143:  /* ashrv8si3_mask */
    case 3141:  /* ashrv8hi3_mask */
    case 3139:  /* ashrv16hi3_mask */
    case 3133:  /* *sse4_1_mulv4si3_mask */
    case 3131:  /* *avx2_mulv8si3_mask */
    case 3129:  /* *avx512f_mulv16si3_mask */
    case 3127:  /* avx512dq_mulv2di3_mask */
    case 3125:  /* avx512dq_mulv4di3_mask */
    case 3123:  /* avx512dq_mulv8di3_mask */
    case 3089:  /* *mulv8hi3_mask */
    case 3087:  /* *mulv16hi3_mask */
    case 3085:  /* *mulv32hi3_mask */
    case 3083:  /* *sse2_ussubv8hi3_mask */
    case 3081:  /* *sse2_sssubv8hi3_mask */
    case 3079:  /* *sse2_usaddv8hi3_mask */
    case 3077:  /* *sse2_ssaddv8hi3_mask */
    case 3075:  /* *avx2_ussubv16hi3_mask */
    case 3073:  /* *avx2_sssubv16hi3_mask */
    case 3071:  /* *avx2_usaddv16hi3_mask */
    case 3069:  /* *avx2_ssaddv16hi3_mask */
    case 3067:  /* *avx512bw_ussubv32hi3_mask */
    case 3065:  /* *avx512bw_sssubv32hi3_mask */
    case 3063:  /* *avx512bw_usaddv32hi3_mask */
    case 3061:  /* *avx512bw_ssaddv32hi3_mask */
    case 3059:  /* *sse2_ussubv16qi3_mask */
    case 3057:  /* *sse2_sssubv16qi3_mask */
    case 3055:  /* *sse2_usaddv16qi3_mask */
    case 3053:  /* *sse2_ssaddv16qi3_mask */
    case 3051:  /* *avx2_ussubv32qi3_mask */
    case 3049:  /* *avx2_sssubv32qi3_mask */
    case 3047:  /* *avx2_usaddv32qi3_mask */
    case 3045:  /* *avx2_ssaddv32qi3_mask */
    case 3043:  /* *avx512bw_ussubv64qi3_mask */
    case 3041:  /* *avx512bw_sssubv64qi3_mask */
    case 3039:  /* *avx512bw_usaddv64qi3_mask */
    case 3037:  /* *avx512bw_ssaddv64qi3_mask */
    case 3035:  /* *subv8hi3_mask */
    case 3034:  /* *addv8hi3_mask */
    case 3033:  /* *subv16hi3_mask */
    case 3032:  /* *addv16hi3_mask */
    case 3031:  /* *subv32hi3_mask */
    case 3030:  /* *addv32hi3_mask */
    case 3029:  /* *subv32qi3_mask */
    case 3028:  /* *addv32qi3_mask */
    case 3027:  /* *subv16qi3_mask */
    case 3026:  /* *addv16qi3_mask */
    case 3025:  /* *subv64qi3_mask */
    case 3024:  /* *addv64qi3_mask */
    case 3023:  /* *subv2di3_mask */
    case 3022:  /* *addv2di3_mask */
    case 3021:  /* *subv4di3_mask */
    case 3020:  /* *addv4di3_mask */
    case 3019:  /* *subv8di3_mask */
    case 3018:  /* *addv8di3_mask */
    case 3017:  /* *subv4si3_mask */
    case 3016:  /* *addv4si3_mask */
    case 3015:  /* *subv8si3_mask */
    case 3014:  /* *addv8si3_mask */
    case 3013:  /* *subv16si3_mask */
    case 3012:  /* *addv16si3_mask */
    case 3011:  /* *subv2di3 */
    case 3009:  /* *addv2di3 */
    case 3007:  /* *subv4di3 */
    case 3005:  /* *addv4di3 */
    case 3003:  /* *subv8di3 */
    case 3001:  /* *addv8di3 */
    case 2999:  /* *subv4si3 */
    case 2997:  /* *addv4si3 */
    case 2995:  /* *subv8si3 */
    case 2993:  /* *addv8si3 */
    case 2991:  /* *subv16si3 */
    case 2989:  /* *addv16si3 */
    case 2987:  /* *subv8hi3 */
    case 2985:  /* *addv8hi3 */
    case 2983:  /* *subv16hi3 */
    case 2981:  /* *addv16hi3 */
    case 2979:  /* *subv32hi3 */
    case 2977:  /* *addv32hi3 */
    case 2975:  /* *subv16qi3 */
    case 2973:  /* *addv16qi3 */
    case 2971:  /* *subv32qi3 */
    case 2969:  /* *addv32qi3 */
    case 2967:  /* *subv64qi3 */
    case 2965:  /* *addv64qi3 */
    case 1820:  /* *xorv8df3_mask */
    case 1818:  /* *iorv8df3_mask */
    case 1816:  /* *andv8df3_mask */
    case 1814:  /* *xorv16sf3_mask */
    case 1812:  /* *iorv16sf3_mask */
    case 1810:  /* *andv16sf3_mask */
    case 1808:  /* *xorv2df3_mask */
    case 1806:  /* *iorv2df3_mask */
    case 1804:  /* *andv2df3_mask */
    case 1802:  /* *xorv4df3_mask */
    case 1800:  /* *iorv4df3_mask */
    case 1798:  /* *andv4df3_mask */
    case 1796:  /* *xorv4sf3_mask */
    case 1794:  /* *iorv4sf3_mask */
    case 1792:  /* *andv4sf3_mask */
    case 1790:  /* *xorv8sf3_mask */
    case 1788:  /* *iorv8sf3_mask */
    case 1786:  /* *andv8sf3_mask */
    case 1597:  /* *sminv2df3_mask */
    case 1593:  /* *smaxv2df3_mask */
    case 1589:  /* *sminv4df3_mask */
    case 1585:  /* *smaxv4df3_mask */
    case 1581:  /* *sminv8df3_mask */
    case 1577:  /* *smaxv8df3_mask */
    case 1573:  /* *sminv4sf3_mask */
    case 1569:  /* *smaxv4sf3_mask */
    case 1565:  /* *sminv8sf3_mask */
    case 1561:  /* *smaxv8sf3_mask */
    case 1557:  /* *sminv16sf3_mask */
    case 1553:  /* *smaxv16sf3_mask */
    case 1496:  /* sse2_divv2df3_mask */
    case 1494:  /* avx_divv4df3_mask */
    case 1491:  /* avx512f_divv8df3_mask */
    case 1488:  /* sse_divv4sf3_mask */
    case 1486:  /* avx_divv8sf3_mask */
    case 1483:  /* avx512f_divv16sf3_mask */
    case 1471:  /* *mulv2df3_mask */
    case 1467:  /* *mulv4df3_mask */
    case 1463:  /* *mulv8df3_mask */
    case 1459:  /* *mulv4sf3_mask */
    case 1455:  /* *mulv8sf3_mask */
    case 1451:  /* *mulv16sf3_mask */
    case 1439:  /* *subv2df3_mask */
    case 1435:  /* *addv2df3_mask */
    case 1431:  /* *subv4df3_mask */
    case 1427:  /* *addv4df3_mask */
    case 1423:  /* *subv8df3_mask */
    case 1419:  /* *addv8df3_mask */
    case 1415:  /* *subv4sf3_mask */
    case 1411:  /* *addv4sf3_mask */
    case 1407:  /* *subv8sf3_mask */
    case 1403:  /* *addv8sf3_mask */
    case 1399:  /* *subv16sf3_mask */
    case 1395:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1596:  /* *sminv2df3_round */
    case 1592:  /* *smaxv2df3_round */
    case 1588:  /* *sminv4df3_round */
    case 1584:  /* *smaxv4df3_round */
    case 1580:  /* *sminv8df3_round */
    case 1576:  /* *smaxv8df3_round */
    case 1572:  /* *sminv4sf3_round */
    case 1568:  /* *smaxv4sf3_round */
    case 1564:  /* *sminv8sf3_round */
    case 1560:  /* *smaxv8sf3_round */
    case 1556:  /* *sminv16sf3_round */
    case 1552:  /* *smaxv16sf3_round */
    case 1490:  /* avx512f_divv8df3_round */
    case 1482:  /* avx512f_divv16sf3_round */
    case 1470:  /* *mulv2df3_round */
    case 1466:  /* *mulv4df3_round */
    case 1462:  /* *mulv8df3_round */
    case 1458:  /* *mulv4sf3_round */
    case 1454:  /* *mulv8sf3_round */
    case 1450:  /* *mulv16sf3_round */
    case 1438:  /* *subv2df3_round */
    case 1434:  /* *addv2df3_round */
    case 1430:  /* *subv4df3_round */
    case 1426:  /* *addv4df3_round */
    case 1422:  /* *subv8df3_round */
    case 1418:  /* *addv8df3_round */
    case 1414:  /* *subv4sf3_round */
    case 1410:  /* *addv4sf3_round */
    case 1406:  /* *subv8sf3_round */
    case 1402:  /* *addv8sf3_round */
    case 1398:  /* *subv16sf3_round */
    case 1394:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1373:  /* avx512vl_storedquv8hi_mask */
    case 1372:  /* avx512vl_storedquv16hi_mask */
    case 1371:  /* avx512bw_storedquv32hi_mask */
    case 1370:  /* avx512vl_storedquv32qi_mask */
    case 1369:  /* avx512vl_storedquv16qi_mask */
    case 1368:  /* avx512bw_storedquv64qi_mask */
    case 1367:  /* avx512vl_storedquv2di_mask */
    case 1366:  /* avx512vl_storedquv4di_mask */
    case 1365:  /* avx512f_storedquv8di_mask */
    case 1364:  /* avx512vl_storedquv4si_mask */
    case 1363:  /* avx512vl_storedquv8si_mask */
    case 1362:  /* avx512f_storedquv16si_mask */
    case 1325:  /* avx512vl_storeupd_mask */
    case 1324:  /* avx512vl_storeupd256_mask */
    case 1323:  /* avx512f_storeupd512_mask */
    case 1322:  /* avx512vl_storeups_mask */
    case 1321:  /* avx512vl_storeups256_mask */
    case 1320:  /* avx512f_storeups512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4934:  /* conflictv2di_mask */
    case 4932:  /* conflictv4di_mask */
    case 4930:  /* conflictv8di_mask */
    case 4928:  /* conflictv4si_mask */
    case 4926:  /* conflictv8si_mask */
    case 4924:  /* conflictv16si_mask */
    case 4582:  /* avx512f_vcvtph2ps512_mask */
    case 4579:  /* vcvtph2ps256_mask */
    case 4577:  /* *vcvtph2ps_load_mask */
    case 4019:  /* avx512er_rsqrt28v8df_mask */
    case 4015:  /* avx512er_rsqrt28v16sf_mask */
    case 4007:  /* avx512er_rcp28v8df_mask */
    case 4003:  /* avx512er_rcp28v16sf_mask */
    case 3999:  /* avx512er_exp2v8df_mask */
    case 3995:  /* avx512er_exp2v16sf_mask */
    case 2641:  /* avx512vl_getexpv2df_mask */
    case 2637:  /* avx512vl_getexpv4df_mask */
    case 2633:  /* avx512f_getexpv8df_mask */
    case 2629:  /* avx512vl_getexpv4sf_mask */
    case 2625:  /* avx512vl_getexpv8sf_mask */
    case 2621:  /* avx512f_getexpv16sf_mask */
    case 2379:  /* ufix_notruncv2dfv2di2_mask */
    case 2377:  /* ufix_notruncv4dfv4di2_mask */
    case 2374:  /* ufix_notruncv8dfv8di2_mask */
    case 2371:  /* fix_notruncv2dfv2di2_mask */
    case 2369:  /* fix_notruncv4dfv4di2_mask */
    case 2366:  /* fix_notruncv8dfv8di2_mask */
    case 2330:  /* ufix_notruncv4dfv4si2_mask */
    case 2326:  /* ufix_notruncv8dfv8si2_mask */
    case 2320:  /* avx_cvtpd2dq256_mask */
    case 2317:  /* avx512f_cvtpd2dq512_mask */
    case 2212:  /* avx512dq_cvtps2uqqv4di_mask */
    case 2209:  /* avx512dq_cvtps2uqqv8di_mask */
    case 2204:  /* avx512dq_cvtps2qqv4di_mask */
    case 2201:  /* avx512dq_cvtps2qqv8di_mask */
    case 2197:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 2193:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 2189:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 2185:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 2182:  /* sse2_fix_notruncv4sfv4si_mask */
    case 2180:  /* avx_fix_notruncv8sfv8si_mask */
    case 1547:  /* rsqrt14v2df_mask */
    case 1545:  /* rsqrt14v4df_mask */
    case 1543:  /* rsqrt14v8df_mask */
    case 1541:  /* rsqrt14v4sf_mask */
    case 1539:  /* rsqrt14v8sf_mask */
    case 1537:  /* rsqrt14v16sf_mask */
    case 1511:  /* rcp14v2df_mask */
    case 1509:  /* rcp14v4df_mask */
    case 1507:  /* rcp14v8df_mask */
    case 1505:  /* rcp14v4sf_mask */
    case 1503:  /* rcp14v8sf_mask */
    case 1501:  /* rcp14v16sf_mask */
    case 1349:  /* *avx512vl_loaddquv2di_mask */
    case 1347:  /* *avx512vl_loaddquv4di_mask */
    case 1345:  /* *avx512f_loaddquv8di_mask */
    case 1343:  /* *sse2_loaddquv4si_mask */
    case 1341:  /* *avx_loaddquv8si_mask */
    case 1339:  /* *avx512f_loaddquv16si_mask */
    case 1337:  /* *avx512vl_loaddquv16hi_mask */
    case 1335:  /* *avx512vl_loaddquv8hi_mask */
    case 1333:  /* *avx512bw_loaddquv32hi_mask */
    case 1331:  /* *avx512f_loaddquv64qi_mask */
    case 1329:  /* *sse2_loaddquv16qi_mask */
    case 1327:  /* *avx_loaddquv32qi_mask */
    case 1313:  /* *sse2_loadupd_mask */
    case 1311:  /* *avx_loadupd256_mask */
    case 1309:  /* *avx512f_loadupd512_mask */
    case 1307:  /* *sse_loadups_mask */
    case 1305:  /* *avx_loadups256_mask */
    case 1303:  /* *avx512f_loadups512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1299:  /* avx512vl_storev8hi_mask */
    case 1298:  /* avx512vl_storev16hi_mask */
    case 1297:  /* avx512bw_storev32hi_mask */
    case 1296:  /* avx512vl_storev32qi_mask */
    case 1295:  /* avx512vl_storev16qi_mask */
    case 1294:  /* avx512bw_storev64qi_mask */
    case 1293:  /* avx512vl_storev2df_mask */
    case 1292:  /* avx512vl_storev4df_mask */
    case 1291:  /* avx512f_storev8df_mask */
    case 1290:  /* avx512vl_storev4sf_mask */
    case 1289:  /* avx512vl_storev8sf_mask */
    case 1288:  /* avx512f_storev16sf_mask */
    case 1287:  /* avx512vl_storev2di_mask */
    case 1286:  /* avx512vl_storev4di_mask */
    case 1285:  /* avx512f_storev8di_mask */
    case 1284:  /* avx512vl_storev4si_mask */
    case 1283:  /* avx512vl_storev8si_mask */
    case 1282:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3871:  /* avx2_pblenddv4si */
    case 3870:  /* avx2_pblenddv8si */
    case 3869:  /* *avx2_pblendw */
    case 3868:  /* sse4_1_pblendw */
    case 3846:  /* sse4_1_blendpd */
    case 3845:  /* avx_blendpd256 */
    case 3844:  /* sse4_1_blendps */
    case 3843:  /* avx_blendps256 */
    case 1281:  /* avx512vl_blendmv8hi */
    case 1280:  /* avx512vl_blendmv16hi */
    case 1279:  /* avx512bw_blendmv32hi */
    case 1278:  /* avx512vl_blendmv32qi */
    case 1277:  /* avx512vl_blendmv16qi */
    case 1276:  /* avx512bw_blendmv64qi */
    case 1275:  /* avx512vl_blendmv2df */
    case 1274:  /* avx512vl_blendmv4df */
    case 1273:  /* avx512f_blendmv8df */
    case 1272:  /* avx512vl_blendmv4sf */
    case 1271:  /* avx512vl_blendmv8sf */
    case 1270:  /* avx512f_blendmv16sf */
    case 1269:  /* avx512vl_blendmv2di */
    case 1268:  /* avx512vl_blendmv4di */
    case 1267:  /* avx512f_blendmv8di */
    case 1266:  /* avx512vl_blendmv4si */
    case 1265:  /* avx512vl_blendmv8si */
    case 1264:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4127:  /* *avx_vzeroall */
    case 1224:  /* *mmx_femms */
    case 1223:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 3742:  /* *sse2_maskmovdqu */
    case 3741:  /* *sse2_maskmovdqu */
    case 1222:  /* *mmx_maskmovq */
    case 1221:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4179:  /* avx512f_permv8df_1 */
    case 4177:  /* avx512f_permv8di_1 */
    case 4175:  /* avx2_permv4df_1 */
    case 4173:  /* avx2_permv4di_1 */
    case 3684:  /* sse2_pshuflw_1 */
    case 3678:  /* sse2_pshufd_1 */
    case 2509:  /* *avx512f_vextracti32x4_1 */
    case 2507:  /* *avx512f_vextractf32x4_1 */
    case 1209:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3708:  /* *vec_extractv4si_zext_mem */
    case 3706:  /* *vec_extractv4si_zext */
    case 3698:  /* *vec_extractv8hi_zext */
    case 3697:  /* *vec_extractv8hi_zext */
    case 3696:  /* *vec_extractv16qi_zext */
    case 3695:  /* *vec_extractv16qi_zext */
    case 1216:  /* *vec_extractv2si_zext_mem */
    case 1208:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 3633:  /* sse4_1_pinsrq */
    case 3632:  /* sse4_1_pinsrd */
    case 3631:  /* sse2_pinsrw */
    case 3630:  /* sse4_1_pinsrb */
    case 2494:  /* *vec_setv4sf_sse4_1 */
    case 1207:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3864:  /* sse4_1_packusdw */
    case 3862:  /* avx2_packusdw */
    case 3860:  /* avx512bw_packusdw */
    case 3592:  /* sse2_packuswb */
    case 3590:  /* avx2_packuswb */
    case 3588:  /* avx512bw_packuswb */
    case 3586:  /* sse2_packssdw */
    case 3584:  /* avx2_packssdw */
    case 3582:  /* avx512bw_packssdw */
    case 3580:  /* sse2_packsswb */
    case 3578:  /* avx2_packsswb */
    case 3576:  /* avx512bw_packsswb */
    case 1200:  /* mmx_packuswb */
    case 1199:  /* mmx_packssdw */
    case 1198:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3112:  /* *sse4_1_mulv2siv2di3 */
    case 3110:  /* *vec_widen_smult_even_v8si */
    case 3108:  /* *vec_widen_smult_even_v16si */
    case 3106:  /* *vec_widen_umult_even_v4si */
    case 3104:  /* *vec_widen_umult_even_v8si */
    case 3102:  /* *vec_widen_umult_even_v16si */
    case 1167:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1218:  /* *mmx_uavgv4hi3 */
    case 1217:  /* *mmx_uavgv8qi3 */
    case 1166:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 3777:  /* ssse3_pmaddubsw */
    case 3776:  /* ssse3_pmaddubsw128 */
    case 3767:  /* avx2_pmaddubsw256 */
    case 3121:  /* *sse2_pmaddwd */
    case 3120:  /* *avx2_pmaddwd */
    case 1165:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3100:  /* *umulv8hi3_highpart */
    case 3098:  /* *smulv8hi3_highpart */
    case 3096:  /* *umulv16hi3_highpart */
    case 3094:  /* *smulv16hi3_highpart */
    case 3092:  /* *umulv32hi3_highpart */
    case 3090:  /* *smulv32hi3_highpart */
    case 1164:  /* *mmx_umulv4hi3_highpart */
    case 1163:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1139:  /* mmx_pi2fw */
    case 1138:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1642:  /* sse3_addsubv4sf3 */
    case 1641:  /* avx_addsubv8sf3 */
    case 1640:  /* sse3_addsubv2df3 */
    case 1639:  /* avx_addsubv4df3 */
    case 1133:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3766:  /* ssse3_phsubdv2si3 */
    case 3765:  /* ssse3_phadddv2si3 */
    case 1646:  /* sse3_hsubv2df3 */
    case 1132:  /* mmx_hsubv2sf3 */
    case 1131:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1111:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1108:  /* *bnd64_stx */
    case 1107:  /* *bnd32_stx */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 4;
      break;

    case 1106:  /* *bnd64_ldx */
    case 1105:  /* *bnd32_ldx */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1104:  /* *bnd64_cn */
    case 1103:  /* *bnd64_cu */
    case 1102:  /* *bnd64_cl */
    case 1101:  /* *bnd32_cn */
    case 1100:  /* *bnd32_cu */
    case 1099:  /* *bnd32_cl */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1096:  /* *bnd64_mk */
    case 1095:  /* *bnd32_mk */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1084:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1068:  /* *lwp_lwpinsdi3_1 */
    case 1067:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1058:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 3748:  /* sse3_monitor_di */
    case 3747:  /* sse3_monitor_si */
    case 1112:  /* *wrpkru */
    case 1092:  /* monitorx_di */
    case 1091:  /* monitorx_si */
    case 1090:  /* mwaitx */
    case 1066:  /* *lwp_lwpvaldi3_1 */
    case 1065:  /* *lwp_lwpvalsi3_1 */
    case 1056:  /* xrstors64 */
    case 1055:  /* xrstor64 */
    case 1054:  /* xrstors_rex64 */
    case 1053:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 3746:  /* sse3_mwait */
    case 1052:  /* xrstors */
    case 1051:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1034:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1033:  /* rdtscp */
    case 1032:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1014:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1010:  /* adjust_stack_and_probedi */
    case 1009:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 988:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1855:  /* *fma_fmadd_v2df */
    case 1853:  /* *fma_fmadd_v4df */
    case 1849:  /* *fma_fmadd_v8df */
    case 1848:  /* *fma_fmadd_df */
    case 1846:  /* *fma_fmadd_v4sf */
    case 1844:  /* *fma_fmadd_v8sf */
    case 1840:  /* *fma_fmadd_v16sf */
    case 1839:  /* *fma_fmadd_sf */
    case 1838:  /* *fma_fmadd_v4df */
    case 1837:  /* *fma_fmadd_v8sf */
    case 1836:  /* *fma_fmadd_v2df */
    case 1835:  /* *fma_fmadd_v4sf */
    case 1834:  /* *fma_fmadd_df */
    case 1833:  /* *fma_fmadd_sf */
    case 1263:  /* avx512vl_loadv8hi_mask */
    case 1262:  /* avx512vl_loadv16hi_mask */
    case 1261:  /* avx512bw_loadv32hi_mask */
    case 1260:  /* avx512vl_loadv32qi_mask */
    case 1259:  /* avx512vl_loadv16qi_mask */
    case 1258:  /* avx512bw_loadv64qi_mask */
    case 1257:  /* avx512vl_loadv2df_mask */
    case 1256:  /* avx512vl_loadv4df_mask */
    case 1255:  /* avx512f_loadv8df_mask */
    case 1254:  /* avx512vl_loadv4sf_mask */
    case 1253:  /* avx512vl_loadv8sf_mask */
    case 1252:  /* avx512f_loadv16sf_mask */
    case 1251:  /* avx512vl_loadv2di_mask */
    case 1250:  /* avx512vl_loadv4di_mask */
    case 1249:  /* avx512f_loadv8di_mask */
    case 1248:  /* avx512vl_loadv4si_mask */
    case 1247:  /* avx512vl_loadv8si_mask */
    case 1246:  /* avx512f_loadv16si_mask */
    case 994:  /* *xop_pcmov_df */
    case 993:  /* *xop_pcmov_sf */
    case 992:  /* *movsfcc_1_387 */
    case 991:  /* *movdfcc_1 */
    case 990:  /* *movxfcc_1 */
    case 989:  /* *movqicc_noc */
    case 987:  /* *movdicc_noc */
    case 986:  /* *movsicc_noc */
    case 985:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 978:  /* *strlenqi_1 */
    case 977:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 976:  /* *cmpstrnqi_1 */
    case 975:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 974:  /* *cmpstrnqi_nz_1 */
    case 973:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 972:  /* *rep_stosqi */
    case 971:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 970:  /* *rep_stossi */
    case 969:  /* *rep_stossi */
    case 968:  /* *rep_stosdi_rex64 */
    case 967:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 966:  /* *strsetqi_1 */
    case 965:  /* *strsetqi_1 */
    case 964:  /* *strsethi_1 */
    case 963:  /* *strsethi_1 */
    case 962:  /* *strsetsi_1 */
    case 961:  /* *strsetsi_1 */
    case 960:  /* *strsetdi_rex_1 */
    case 959:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 958:  /* *rep_movqi */
    case 957:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 956:  /* *rep_movsi */
    case 955:  /* *rep_movsi */
    case 954:  /* *rep_movdi_rex64 */
    case 953:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 952:  /* *strmovqi_1 */
    case 951:  /* *strmovqi_1 */
    case 950:  /* *strmovhi_1 */
    case 949:  /* *strmovhi_1 */
    case 948:  /* *strmovsi_1 */
    case 947:  /* *strmovsi_1 */
    case 946:  /* *strmovdi_rex_1 */
    case 945:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 929:  /* fistdi2_ceil_with_temp */
    case 928:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 937:  /* fistsi2_ceil_with_temp */
    case 936:  /* fistsi2_floor_with_temp */
    case 935:  /* fisthi2_ceil_with_temp */
    case 934:  /* fisthi2_floor_with_temp */
    case 927:  /* fistdi2_ceil */
    case 926:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 4981:  /* atomic_storedi_fpu */
    case 4976:  /* atomic_loaddi_fpu */
    case 933:  /* fistsi2_ceil */
    case 932:  /* fistsi2_floor */
    case 931:  /* fisthi2_ceil */
    case 930:  /* fisthi2_floor */
    case 919:  /* frndintxf2_mask_pm_i387 */
    case 917:  /* frndintxf2_trunc_i387 */
    case 916:  /* frndintxf2_ceil_i387 */
    case 915:  /* frndintxf2_floor_i387 */
    case 905:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1020:  /* stack_tls_protect_set_di */
    case 1019:  /* stack_tls_protect_set_si */
    case 1018:  /* stack_protect_set_di */
    case 1017:  /* stack_protect_set_si */
    case 911:  /* fistsi2_with_temp */
    case 910:  /* fisthi2_with_temp */
    case 904:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 899:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 894:  /* fyl2xp1_extenddfxf3_i387 */
    case 893:  /* fyl2xp1_extendsfxf3_i387 */
    case 891:  /* fyl2x_extenddfxf3_i387 */
    case 890:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 888:  /* fpatan_extenddfxf3_i387 */
    case 887:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1024:  /* stack_tls_protect_test_di */
    case 1023:  /* stack_tls_protect_test_si */
    case 1022:  /* stack_protect_test_di */
    case 1021:  /* stack_protect_test_si */
    case 892:  /* fyl2xp1xf3_i387 */
    case 889:  /* fyl2xxf3_i387 */
    case 886:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 885:  /* fptan_extenddfxf4_i387 */
    case 884:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 883:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 897:  /* fxtract_extenddfxf3_i387 */
    case 896:  /* fxtract_extendsfxf3_i387 */
    case 882:  /* sincos_extenddfxf3_i387 */
    case 881:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1030:  /* rdpmc_rex64 */
    case 895:  /* fxtractxf3_i387 */
    case 880:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 873:  /* fprem1xf4_i387 */
    case 872:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 863:  /* *fop_xf_6_i387 */
    case 862:  /* *fop_xf_6_i387 */
    case 851:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 861:  /* *fop_xf_5_i387 */
    case 860:  /* *fop_xf_5_i387 */
    case 857:  /* *fop_xf_3_i387 */
    case 856:  /* *fop_xf_3_i387 */
    case 850:  /* *fop_df_5_i387 */
    case 848:  /* *fop_df_3_i387 */
    case 847:  /* *fop_df_3_i387 */
    case 846:  /* *fop_sf_3_i387 */
    case 845:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 859:  /* *fop_xf_4_i387 */
    case 858:  /* *fop_xf_4_i387 */
    case 855:  /* *fop_xf_2_i387 */
    case 854:  /* *fop_xf_2_i387 */
    case 849:  /* *fop_df_4_i387 */
    case 844:  /* *fop_df_2_i387 */
    case 843:  /* *fop_df_2_i387 */
    case 842:  /* *fop_sf_2_i387 */
    case 841:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 831:  /* *tls_dynamic_gnu2_combine_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 828:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 827:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 826:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 823:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 825:  /* *add_tp_di */
    case 824:  /* *add_tp_si */
    case 822:  /* *add_tp_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 817:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 816:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 813:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 812:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 811:  /* *tls_global_dynamic_64_di */
    case 810:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 809:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 808:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 807:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 806:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 805:  /* bswaphi_lowpart */
    case 804:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 792:  /* *bsrhi */
    case 791:  /* bsr */
    case 790:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 789:  /* *tbm_tzmsk_di */
    case 788:  /* *tbm_tzmsk_si */
    case 787:  /* *tbm_t1mskc_di */
    case 786:  /* *tbm_t1mskc_si */
    case 785:  /* *tbm_blsic_di */
    case 784:  /* *tbm_blsic_si */
    case 777:  /* *tbm_blcic_di */
    case 776:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 775:  /* *tbm_blci_di */
    case 774:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 771:  /* tbm_bextri_di */
    case 770:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 4980:  /* atomic_storedi_1 */
    case 4979:  /* atomic_storesi_1 */
    case 4978:  /* atomic_storehi_1 */
    case 4977:  /* atomic_storeqi_1 */
    case 4970:  /* vpmultishiftqbv32qi */
    case 4968:  /* vpmultishiftqbv16qi */
    case 4966:  /* vpmultishiftqbv64qi */
    case 4940:  /* sha256msg2 */
    case 4939:  /* sha256msg1 */
    case 4937:  /* sha1nexte */
    case 4936:  /* sha1msg2 */
    case 4935:  /* sha1msg1 */
    case 4897:  /* avx512vl_getmantv2df */
    case 4893:  /* avx512vl_getmantv4df */
    case 4889:  /* avx512f_getmantv8df */
    case 4885:  /* avx512vl_getmantv4sf */
    case 4881:  /* avx512vl_getmantv8sf */
    case 4877:  /* avx512f_getmantv16sf */
    case 4873:  /* avx512dq_fpclassv2df */
    case 4871:  /* avx512dq_fpclassv4df */
    case 4869:  /* avx512dq_fpclassv8df */
    case 4867:  /* avx512dq_fpclassv4sf */
    case 4865:  /* avx512dq_fpclassv8sf */
    case 4863:  /* avx512dq_fpclassv16sf */
    case 4589:  /* *avx512f_vcvtps2ph512 */
    case 4587:  /* vcvtps2ph256 */
    case 4586:  /* *vcvtps2ph_store */
    case 4347:  /* avx_vpermilvarv2df3 */
    case 4345:  /* avx_vpermilvarv4df3 */
    case 4343:  /* avx512f_vpermilvarv8df3 */
    case 4341:  /* avx_vpermilvarv4sf3 */
    case 4339:  /* avx_vpermilvarv8sf3 */
    case 4337:  /* avx512f_vpermilvarv16sf3 */
    case 4171:  /* avx512bw_permvarv32hi */
    case 4169:  /* avx512vl_permvarv16hi */
    case 4167:  /* avx512vl_permvarv8hi */
    case 4165:  /* avx512vl_permvarv32qi */
    case 4163:  /* avx512vl_permvarv16qi */
    case 4161:  /* avx512bw_permvarv64qi */
    case 4159:  /* avx2_permvarv4df */
    case 4157:  /* avx2_permvarv4di */
    case 4155:  /* avx512f_permvarv8df */
    case 4153:  /* avx512f_permvarv8di */
    case 4151:  /* avx512f_permvarv16sf */
    case 4149:  /* avx512f_permvarv16si */
    case 4147:  /* avx2_permvarv8sf */
    case 4145:  /* avx2_permvarv8si */
    case 4125:  /* aeskeygenassist */
    case 4123:  /* aesdeclast */
    case 4122:  /* aesdec */
    case 4121:  /* aesenclast */
    case 4120:  /* aesenc */
    case 3964:  /* sse4_1_roundpd */
    case 3963:  /* avx_roundpd256 */
    case 3962:  /* sse4_1_roundps */
    case 3961:  /* avx_roundps256 */
    case 3842:  /* sse4a_insertq */
    case 3840:  /* sse4a_extrq */
    case 3800:  /* ssse3_psignv2si3 */
    case 3799:  /* ssse3_psignv4hi3 */
    case 3798:  /* ssse3_psignv8qi3 */
    case 3797:  /* ssse3_psignv4si3 */
    case 3796:  /* avx2_psignv8si3 */
    case 3795:  /* ssse3_psignv8hi3 */
    case 3794:  /* avx2_psignv16hi3 */
    case 3793:  /* ssse3_psignv16qi3 */
    case 3792:  /* avx2_psignv32qi3 */
    case 3791:  /* ssse3_pshufbv8qi3 */
    case 3789:  /* ssse3_pshufbv16qi3 */
    case 3787:  /* avx2_pshufbv32qi3 */
    case 3785:  /* avx512bw_pshufbv64qi3 */
    case 3772:  /* avx512bw_pmaddubsw512v32hi */
    case 3770:  /* avx512bw_pmaddubsw512v16hi */
    case 3768:  /* avx512bw_pmaddubsw512v8hi */
    case 3728:  /* sse2_psadbw */
    case 3727:  /* avx2_psadbw */
    case 3726:  /* avx512f_psadbw */
    case 3686:  /* *avx512bw_pshufhwv32hi */
    case 3680:  /* *avx512bw_pshuflwv32hi */
    case 3574:  /* avx512vl_testnmv2di3 */
    case 3572:  /* avx512vl_testnmv4di3 */
    case 3570:  /* avx512f_testnmv8di3 */
    case 3568:  /* avx512vl_testnmv4si3 */
    case 3566:  /* avx512vl_testnmv8si3 */
    case 3564:  /* avx512f_testnmv16si3 */
    case 3562:  /* avx512vl_testnmv8hi3 */
    case 3560:  /* avx512vl_testnmv16hi3 */
    case 3558:  /* avx512bw_testnmv32hi3 */
    case 3556:  /* avx512vl_testnmv32qi3 */
    case 3554:  /* avx512vl_testnmv16qi3 */
    case 3552:  /* avx512bw_testnmv64qi3 */
    case 3550:  /* avx512vl_testmv2di3 */
    case 3548:  /* avx512vl_testmv4di3 */
    case 3546:  /* avx512f_testmv8di3 */
    case 3544:  /* avx512vl_testmv4si3 */
    case 3542:  /* avx512vl_testmv8si3 */
    case 3540:  /* avx512f_testmv16si3 */
    case 3538:  /* avx512vl_testmv8hi3 */
    case 3536:  /* avx512vl_testmv16hi3 */
    case 3534:  /* avx512bw_testmv32hi3 */
    case 3532:  /* avx512vl_testmv32qi3 */
    case 3530:  /* avx512vl_testmv16qi3 */
    case 3528:  /* avx512bw_testmv64qi3 */
    case 3433:  /* avx512vl_gtv8hi3 */
    case 3431:  /* avx512vl_gtv16hi3 */
    case 3429:  /* avx512bw_gtv32hi3 */
    case 3427:  /* avx512vl_gtv32qi3 */
    case 3425:  /* avx512vl_gtv16qi3 */
    case 3423:  /* avx512bw_gtv64qi3 */
    case 3421:  /* avx512vl_gtv2di3 */
    case 3419:  /* avx512vl_gtv4di3 */
    case 3417:  /* avx512f_gtv8di3 */
    case 3415:  /* avx512vl_gtv4si3 */
    case 3413:  /* avx512vl_gtv8si3 */
    case 3411:  /* avx512f_gtv16si3 */
    case 3400:  /* avx512vl_eqv2di3_1 */
    case 3398:  /* avx512vl_eqv4di3_1 */
    case 3396:  /* avx512f_eqv8di3_1 */
    case 3394:  /* avx512vl_eqv4si3_1 */
    case 3392:  /* avx512vl_eqv8si3_1 */
    case 3390:  /* avx512f_eqv16si3_1 */
    case 3388:  /* avx512vl_eqv8hi3_1 */
    case 3386:  /* avx512vl_eqv16hi3_1 */
    case 3384:  /* avx512bw_eqv32hi3_1 */
    case 3382:  /* avx512vl_eqv32qi3_1 */
    case 3380:  /* avx512vl_eqv16qi3_1 */
    case 3378:  /* avx512bw_eqv64qi3_1 */
    case 3118:  /* avx512bw_pmaddwd512v8hi */
    case 3116:  /* avx512bw_pmaddwd512v16hi */
    case 3114:  /* avx512bw_pmaddwd512v32hi */
    case 2727:  /* avx512vl_rndscalev2df */
    case 2723:  /* avx512vl_rndscalev4df */
    case 2719:  /* avx512f_rndscalev8df */
    case 2715:  /* avx512vl_rndscalev4sf */
    case 2711:  /* avx512vl_rndscalev8sf */
    case 2707:  /* avx512f_rndscalev16sf */
    case 2597:  /* avx512vl_scalefv2df */
    case 2593:  /* avx512vl_scalefv4df */
    case 2589:  /* avx512f_scalefv8df */
    case 2585:  /* avx512vl_scalefv4sf */
    case 2581:  /* avx512vl_scalefv8sf */
    case 2577:  /* avx512f_scalefv16sf */
    case 1663:  /* *reducepv2df */
    case 1661:  /* *reducepv4df */
    case 1659:  /* *reducepv8df */
    case 1657:  /* *reducepv4sf */
    case 1655:  /* *reducepv8sf */
    case 1653:  /* *reducepv16sf */
    case 1629:  /* ieee_minv2df3 */
    case 1627:  /* ieee_maxv2df3 */
    case 1625:  /* ieee_minv4df3 */
    case 1623:  /* ieee_maxv4df3 */
    case 1619:  /* ieee_minv8df3 */
    case 1615:  /* ieee_maxv8df3 */
    case 1613:  /* ieee_minv4sf3 */
    case 1611:  /* ieee_maxv4sf3 */
    case 1609:  /* ieee_minv8sf3 */
    case 1607:  /* ieee_maxv8sf3 */
    case 1603:  /* ieee_minv16sf3 */
    case 1599:  /* ieee_maxv16sf3 */
    case 1219:  /* mmx_psadbw */
    case 1130:  /* mmx_rsqit1v2sf3 */
    case 1128:  /* mmx_rcpit2v2sf3 */
    case 1127:  /* mmx_rcpit1v2sf3 */
    case 1125:  /* mmx_ieee_minv2sf3 */
    case 1124:  /* mmx_ieee_maxv2sf3 */
    case 1050:  /* xsaves64 */
    case 1049:  /* xsavec64 */
    case 1048:  /* xsaveopt64 */
    case 1047:  /* xsave64 */
    case 1046:  /* xsaves_rex64 */
    case 1045:  /* xsavec_rex64 */
    case 1044:  /* xsaveopt_rex64 */
    case 1043:  /* xsave_rex64 */
    case 1028:  /* sse4_2_crc32di */
    case 1027:  /* sse4_2_crc32si */
    case 1026:  /* sse4_2_crc32hi */
    case 1025:  /* sse4_2_crc32qi */
    case 1002:  /* *ieee_smindf3 */
    case 1001:  /* *ieee_smaxdf3 */
    case 1000:  /* *ieee_sminsf3 */
    case 999:  /* *ieee_smaxsf3 */
    case 901:  /* sse4_1_rounddf2 */
    case 900:  /* sse4_1_roundsf2 */
    case 769:  /* bmi2_pext_di3 */
    case 768:  /* bmi2_pext_si3 */
    case 767:  /* bmi2_pdep_di3 */
    case 766:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 765:  /* *bmi2_bzhi_di3_1_ccz */
    case 764:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 763:  /* *bmi2_bzhi_di3_1 */
    case 762:  /* *bmi2_bzhi_si3_1 */
    case 761:  /* *bmi2_bzhi_di3 */
    case 760:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 783:  /* *tbm_blsfill_di */
    case 782:  /* *tbm_blsfill_si */
    case 781:  /* *tbm_blcs_di */
    case 780:  /* *tbm_blcs_si */
    case 779:  /* *tbm_blcmsk_di */
    case 778:  /* *tbm_blcmsk_si */
    case 773:  /* *tbm_blcfill_di */
    case 772:  /* *tbm_blcfill_si */
    case 759:  /* *bmi_blsr_di */
    case 758:  /* *bmi_blsr_si */
    case 757:  /* *bmi_blsmsk_di */
    case 756:  /* *bmi_blsmsk_si */
    case 755:  /* *bmi_blsi_di */
    case 754:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 753:  /* *bmi_bextr_di_ccz */
    case 752:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1012:  /* probe_stack_rangedi */
    case 1011:  /* probe_stack_rangesi */
    case 830:  /* *tls_dynamic_gnu2_call_64 */
    case 751:  /* bmi_bextr_di */
    case 750:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 749:  /* *bmi_andn_di_ccno */
    case 748:  /* *bmi_andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 4581:  /* *avx512f_vcvtph2ps512_round */
    case 4018:  /* *avx512er_rsqrt28v8df_round */
    case 4014:  /* *avx512er_rsqrt28v16sf_round */
    case 4006:  /* *avx512er_rcp28v8df_round */
    case 4002:  /* *avx512er_rcp28v16sf_round */
    case 3998:  /* avx512er_exp2v8df_round */
    case 3994:  /* avx512er_exp2v16sf_round */
    case 2640:  /* avx512vl_getexpv2df_round */
    case 2636:  /* avx512vl_getexpv4df_round */
    case 2632:  /* avx512f_getexpv8df_round */
    case 2628:  /* avx512vl_getexpv4sf_round */
    case 2624:  /* avx512vl_getexpv8sf_round */
    case 2620:  /* avx512f_getexpv16sf_round */
    case 2373:  /* ufix_notruncv8dfv8di2_round */
    case 2365:  /* fix_notruncv8dfv8di2_round */
    case 2329:  /* ufix_notruncv4dfv4si2_round */
    case 2325:  /* ufix_notruncv8dfv8si2_round */
    case 2316:  /* avx512f_cvtpd2dq512_round */
    case 2208:  /* *avx512dq_cvtps2uqqv8di_round */
    case 2200:  /* *avx512dq_cvtps2qqv8di_round */
    case 2196:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 2192:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 2188:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 2184:  /* avx512f_fix_notruncv16sfv16si_round */
    case 742:  /* *lzcnt_di_falsedep */
    case 741:  /* *lzcnt_si_falsedep */
    case 729:  /* *bmi_tzcnt_di_falsedep */
    case 728:  /* *bmi_tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1008:  /* allocate_stack_worker_probe_di */
    case 1007:  /* allocate_stack_worker_probe_si */
    case 925:  /* *fistdi2_ceil_1 */
    case 924:  /* *fistdi2_floor_1 */
    case 923:  /* *fistsi2_ceil_1 */
    case 922:  /* *fistsi2_floor_1 */
    case 921:  /* *fisthi2_ceil_1 */
    case 920:  /* *fisthi2_floor_1 */
    case 918:  /* frndintxf2_mask_pm */
    case 914:  /* frndintxf2_trunc */
    case 913:  /* frndintxf2_ceil */
    case 912:  /* frndintxf2_floor */
    case 745:  /* *lzcnt_di */
    case 744:  /* *lzcnt_si */
    case 743:  /* *lzcnt_hi */
    case 740:  /* *lzcnt_di_falsedep_1 */
    case 739:  /* *lzcnt_si_falsedep_1 */
    case 732:  /* *bmi_tzcnt_di */
    case 731:  /* *bmi_tzcnt_si */
    case 730:  /* *bmi_tzcnt_hi */
    case 727:  /* *bmi_tzcnt_di_falsedep_1 */
    case 726:  /* *bmi_tzcnt_si_falsedep_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 2415:  /* avx512f_cvtps2pd512_round */
    case 2407:  /* *avx512f_cvtpd2ps512_round */
    case 2385:  /* ufix_truncv8sfv8di2_round */
    case 2381:  /* fix_truncv8sfv8di2_round */
    case 2353:  /* ufix_truncv8dfv8di2_round */
    case 2349:  /* fix_truncv8dfv8di2_round */
    case 2339:  /* ufix_truncv8dfv8si2_round */
    case 2335:  /* fix_truncv8dfv8si2_round */
    case 2292:  /* ufloatv8div8sf2_round */
    case 2288:  /* floatv8div8sf2_round */
    case 2284:  /* ufloatv2div2df2_round */
    case 2280:  /* floatv2div2df2_round */
    case 2276:  /* ufloatv4div4df2_round */
    case 2272:  /* floatv4div4df2_round */
    case 2268:  /* ufloatv8div8df2_round */
    case 2264:  /* floatv8div8df2_round */
    case 2220:  /* ufix_truncv16sfv16si2_round */
    case 2216:  /* fix_truncv16sfv16si2_round */
    case 2176:  /* ufloatv4siv4sf2_round */
    case 2172:  /* ufloatv8siv8sf2_round */
    case 2168:  /* ufloatv16siv16sf2_round */
    case 2160:  /* floatv16siv16sf2_round */
    case 1523:  /* avx512f_sqrtv8df2_round */
    case 1515:  /* avx512f_sqrtv16sf2_round */
    case 796:  /* *popcountdi2_falsedep */
    case 795:  /* *popcountsi2_falsedep */
    case 736:  /* *clzdi2_lzcnt_falsedep */
    case 735:  /* *clzsi2_lzcnt_falsedep */
    case 723:  /* *ctzdi2_falsedep */
    case 722:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 719:  /* *bsfdi_1 */
    case 718:  /* *bsfsi_1 */
    case 717:  /* *tzcntdi_1 */
    case 716:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3838:  /* sse4a_vmmovntv2df */
    case 3837:  /* sse4a_vmmovntv4sf */
    case 2252:  /* sse2_cvtsd2siq */
    case 2249:  /* sse2_cvtsd2si */
    case 2243:  /* avx512f_vcvtsd2usiq */
    case 2241:  /* avx512f_vcvtsd2usi */
    case 2235:  /* avx512f_vcvtss2usiq */
    case 2233:  /* avx512f_vcvtss2usi */
    case 2213:  /* *avx512dq_cvtps2uqqv2di */
    case 2205:  /* *avx512dq_cvtps2qqv2di */
    case 2145:  /* sse_cvtss2siq */
    case 2142:  /* sse_cvtss2si */
    case 879:  /* *cos_extenddfxf2_i387 */
    case 878:  /* *sin_extenddfxf2_i387 */
    case 877:  /* *cos_extendsfxf2_i387 */
    case 876:  /* *sin_extendsfxf2_i387 */
    case 710:  /* set_got_offset_rex64 */
    case 709:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 707:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1082:  /* rdseeddi_1 */
    case 1081:  /* rdseedsi_1 */
    case 1080:  /* rdseedhi_1 */
    case 1079:  /* rdranddi_1 */
    case 1078:  /* rdrandsi_1 */
    case 1077:  /* rdrandhi_1 */
    case 1057:  /* fnstenv */
    case 706:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 702:  /* simple_return_indirect_internal */
    case 701:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3745:  /* sse2_clflush */
    case 3743:  /* sse_ldmxcsr */
    case 1094:  /* clzero_di */
    case 1093:  /* clzero_si */
    case 1089:  /* clflushopt */
    case 1088:  /* clwb */
    case 1086:  /* xabort */
    case 1076:  /* wrgsbasedi */
    case 1075:  /* wrfsbasedi */
    case 1074:  /* wrgsbasesi */
    case 1073:  /* wrfsbasesi */
    case 1062:  /* *lwp_llwpcbdi1 */
    case 1061:  /* *lwp_llwpcbsi1 */
    case 1038:  /* fxrstor64 */
    case 1037:  /* fxrstor */
    case 714:  /* split_stack_return */
    case 705:  /* pad */
    case 704:  /* nops */
    case 698:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 4974:  /* mfence_sse2 */
    case 4973:  /* *sse_sfence */
    case 4972:  /* *sse2_lfence */
    case 1083:  /* *pause */
    case 697:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4128:  /* avx_vzeroupper */
    case 1087:  /* xtest_1 */
    case 1085:  /* xend */
    case 1060:  /* fnclex */
    case 1013:  /* trap */
    case 944:  /* cld */
    case 713:  /* leave_rex64 */
    case 712:  /* leave */
    case 711:  /* eh_return_internal */
    case 703:  /* nop */
    case 700:  /* simple_return_internal_long */
    case 699:  /* simple_return_internal */
    case 696:  /* blockage */
      break;

    case 695:  /* *sibcall_value_pop_memory */
    case 694:  /* *sibcall_value_pop */
    case 693:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 688:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 687:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4488:  /* vec_set_hi_v32qi */
    case 4486:  /* vec_set_hi_v16hi */
    case 4483:  /* vec_set_hi_v8sf */
    case 4481:  /* vec_set_hi_v8si */
    case 4475:  /* vec_set_hi_v4df */
    case 4473:  /* vec_set_hi_v4di */
    case 3656:  /* vec_set_hi_v8di */
    case 3654:  /* vec_set_hi_v8df */
    case 3648:  /* vec_set_hi_v16si */
    case 3646:  /* vec_set_hi_v16sf */
    case 3449:  /* *andnotv2di3 */
    case 3448:  /* *andnotv4di3 */
    case 3447:  /* *andnotv4si3 */
    case 3446:  /* *andnotv8si3 */
    case 3445:  /* *andnotv8hi3 */
    case 3444:  /* *andnotv16hi3 */
    case 3443:  /* *andnotv32hi3 */
    case 3442:  /* *andnotv16qi3 */
    case 3441:  /* *andnotv32qi3 */
    case 3440:  /* *andnotv64qi3 */
    case 3439:  /* *andnotv8di3 */
    case 3438:  /* *andnotv16si3 */
    case 2936:  /* *avx512vl_us_truncatev2div2si2 */
    case 2935:  /* *avx512vl_truncatev2div2si2 */
    case 2934:  /* *avx512vl_ss_truncatev2div2si2 */
    case 2897:  /* *avx512vl_us_truncatev4siv4hi2 */
    case 2896:  /* *avx512vl_truncatev4siv4hi2 */
    case 2895:  /* *avx512vl_ss_truncatev4siv4hi2 */
    case 2894:  /* *avx512vl_us_truncatev2div2hi2 */
    case 2893:  /* *avx512vl_truncatev2div2hi2 */
    case 2892:  /* *avx512vl_ss_truncatev2div2hi2 */
    case 2891:  /* *avx512vl_us_truncatev4div4hi2 */
    case 2890:  /* *avx512vl_truncatev4div4hi2 */
    case 2889:  /* *avx512vl_ss_truncatev4div4hi2 */
    case 2828:  /* *avx512vl_us_truncatev8hiv8qi2 */
    case 2827:  /* *avx512vl_truncatev8hiv8qi2 */
    case 2826:  /* *avx512vl_ss_truncatev8hiv8qi2 */
    case 2825:  /* *avx512vl_us_truncatev4siv4qi2 */
    case 2824:  /* *avx512vl_truncatev4siv4qi2 */
    case 2823:  /* *avx512vl_ss_truncatev4siv4qi2 */
    case 2822:  /* *avx512vl_us_truncatev8siv8qi2 */
    case 2821:  /* *avx512vl_truncatev8siv8qi2 */
    case 2820:  /* *avx512vl_ss_truncatev8siv8qi2 */
    case 2819:  /* *avx512vl_us_truncatev2div2qi2 */
    case 2818:  /* *avx512vl_truncatev2div2qi2 */
    case 2817:  /* *avx512vl_ss_truncatev2div2qi2 */
    case 2816:  /* *avx512vl_us_truncatev4div4qi2 */
    case 2815:  /* *avx512vl_truncatev4div4qi2 */
    case 2814:  /* *avx512vl_ss_truncatev4div4qi2 */
    case 2760:  /* sse2_loadhpd */
    case 2480:  /* sse_loadhps */
    case 2412:  /* *sse2_cvtpd2ps */
    case 1823:  /* *andnottf3 */
    case 1822:  /* *andnotdf3 */
    case 1821:  /* *andnotsf3 */
    case 1783:  /* avx512f_andnotv8df3 */
    case 1781:  /* avx512f_andnotv16sf3 */
    case 1779:  /* sse2_andnotv2df3 */
    case 1777:  /* avx_andnotv4df3 */
    case 1775:  /* sse_andnotv4sf3 */
    case 1773:  /* avx_andnotv8sf3 */
    case 1532:  /* sse2_vmsqrtv2df2 */
    case 1530:  /* sse_vmsqrtv4sf2 */
    case 1188:  /* mmx_andnotv2si3 */
    case 1187:  /* mmx_andnotv4hi3 */
    case 1186:  /* mmx_andnotv8qi3 */
    case 690:  /* *sibcall_value */
    case 689:  /* *sibcall_value */
    case 686:  /* *call_value */
    case 685:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 684:  /* *sibcall_pop_memory */
    case 683:  /* *sibcall_pop */
    case 682:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 677:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 676:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 673:  /* *tablejump_1 */
    case 672:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 669:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 668:  /* *jccxf_si_r_i387 */
    case 667:  /* *jccdf_si_r_i387 */
    case 666:  /* *jccsf_si_r_i387 */
    case 665:  /* *jccxf_hi_r_i387 */
    case 664:  /* *jccdf_hi_r_i387 */
    case 663:  /* *jccsf_hi_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 662:  /* *jccxf_si_i387 */
    case 661:  /* *jccdf_si_i387 */
    case 660:  /* *jccsf_si_i387 */
    case 659:  /* *jccxf_hi_i387 */
    case 658:  /* *jccdf_hi_i387 */
    case 657:  /* *jccsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 656:  /* *jccuxf_r_i387 */
    case 655:  /* *jccudf_r_i387 */
    case 654:  /* *jccusf_r_i387 */
    case 650:  /* *jccdf_r_i387 */
    case 649:  /* *jccsf_r_i387 */
    case 646:  /* *jccxf_r_i387 */
    case 644:  /* *jccxf_0_r_i387 */
    case 643:  /* *jccdf_0_r_i387 */
    case 642:  /* *jccsf_0_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 653:  /* *jccuxf_i387 */
    case 652:  /* *jccudf_i387 */
    case 651:  /* *jccusf_i387 */
    case 648:  /* *jccdf_i387 */
    case 647:  /* *jccsf_i387 */
    case 645:  /* *jccxf_i387 */
    case 641:  /* *jccxf_0_i387 */
    case 640:  /* *jccdf_0_i387 */
    case 639:  /* *jccsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 638:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 637:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1764:  /* avx512f_maskcmpv2df3 */
    case 1763:  /* avx512f_maskcmpv4df3 */
    case 1762:  /* avx512f_maskcmpv8df3 */
    case 1761:  /* avx512f_maskcmpv4sf3 */
    case 1760:  /* avx512f_maskcmpv8sf3 */
    case 1759:  /* avx512f_maskcmpv16sf3 */
    case 1680:  /* sse2_maskcmpv2df3 */
    case 1679:  /* avx_maskcmpv4df3 */
    case 1678:  /* sse_maskcmpv4sf3 */
    case 1677:  /* avx_maskcmpv8sf3 */
    case 1676:  /* *sse2_maskcmpv2df3_comm */
    case 1675:  /* *avx_maskcmpv4df3_comm */
    case 1674:  /* *sse_maskcmpv4sf3_comm */
    case 1673:  /* *avx_maskcmpv8sf3_comm */
    case 853:  /* *fop_xf_1_i387 */
    case 852:  /* *fop_xf_comm_i387 */
    case 840:  /* *fop_df_1_i387 */
    case 839:  /* *fop_sf_1_i387 */
    case 838:  /* *fop_df_1_mixed */
    case 837:  /* *fop_sf_1_mixed */
    case 835:  /* *fop_df_comm_i387 */
    case 834:  /* *fop_sf_comm_i387 */
    case 833:  /* *fop_df_comm_mixed */
    case 832:  /* *fop_sf_comm_mixed */
    case 636:  /* setcc_df_sse */
    case 635:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 629:  /* *jcc_btdi_mask */
    case 628:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 627:  /* *jcc_btdi_1 */
    case 626:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 625:  /* *jcc_btdi */
    case 624:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 623:  /* *btdi */
    case 622:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 621:  /* *btcq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 620:  /* *btrq */
    case 619:  /* *btsq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 603:  /* ix86_rotrti3_doubleword */
    case 602:  /* ix86_rotrdi3_doubleword */
    case 601:  /* ix86_rotlti3_doubleword */
    case 600:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 3628:  /* vec_interleave_lowv4si */
    case 3626:  /* *avx512f_interleave_lowv16si */
    case 3624:  /* avx2_interleave_lowv8si */
    case 3622:  /* vec_interleave_highv4si */
    case 3620:  /* *avx512f_interleave_highv16si */
    case 3618:  /* avx2_interleave_highv8si */
    case 3616:  /* vec_interleave_lowv8hi */
    case 3614:  /* avx2_interleave_lowv16hi */
    case 3612:  /* *avx512bw_interleave_lowv32hi */
    case 3610:  /* vec_interleave_highv8hi */
    case 3608:  /* avx2_interleave_highv16hi */
    case 3606:  /* avx512bw_interleave_highv32hi */
    case 3604:  /* vec_interleave_lowv16qi */
    case 3602:  /* avx2_interleave_lowv32qi */
    case 3600:  /* avx512bw_interleave_lowv64qi */
    case 3598:  /* vec_interleave_highv16qi */
    case 3596:  /* avx2_interleave_highv32qi */
    case 3594:  /* avx512bw_interleave_highv64qi */
    case 2752:  /* vec_interleave_lowv2di */
    case 2750:  /* *avx512f_interleave_lowv8di */
    case 2748:  /* avx2_interleave_lowv4di */
    case 2746:  /* vec_interleave_highv2di */
    case 2744:  /* *avx512f_interleave_highv8di */
    case 2742:  /* avx2_interleave_highv4di */
    case 2572:  /* *vec_interleave_lowv2df */
    case 2569:  /* *avx_unpcklpd256 */
    case 2567:  /* *avx512f_unpcklpd512 */
    case 2566:  /* *vec_interleave_highv2df */
    case 2563:  /* avx_unpckhpd256 */
    case 2561:  /* *avx512f_unpckhpd512 */
    case 2461:  /* vec_interleave_lowv4sf */
    case 2458:  /* avx_unpcklps256 */
    case 2456:  /* *avx512f_unpcklps512 */
    case 2454:  /* vec_interleave_highv4sf */
    case 2452:  /* avx_unpckhps256 */
    case 2450:  /* *avx512f_unpckhps512 */
    case 2449:  /* sse_movlhps */
    case 2448:  /* sse_movhlps */
    case 1206:  /* mmx_punpckldq */
    case 1205:  /* mmx_punpckhdq */
    case 1204:  /* mmx_punpcklwd */
    case 1203:  /* mmx_punpckhwd */
    case 1202:  /* mmx_punpcklbw */
    case 1201:  /* mmx_punpckhbw */
    case 610:  /* *bmi2_rorxsi3_1_zext */
    case 569:  /* *bmi2_ashrsi3_1_zext */
    case 568:  /* *bmi2_lshrsi3_1_zext */
    case 533:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 599:  /* *rotrdi3_mask */
    case 598:  /* *rotldi3_mask */
    case 597:  /* *rotrsi3_mask */
    case 596:  /* *rotlsi3_mask */
    case 550:  /* *ashrdi3_mask */
    case 549:  /* *lshrdi3_mask */
    case 548:  /* *ashrsi3_mask */
    case 547:  /* *lshrsi3_mask */
    case 528:  /* *ashldi3_mask */
    case 527:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 556:  /* x86_shrd */
    case 555:  /* x86_64_shrd */
    case 526:  /* x86_shld */
    case 525:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 514:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 504:  /* copysigntf3_var */
    case 503:  /* copysigndf3_var */
    case 502:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 4958:  /* vpamdd52huqv2di */
    case 4956:  /* vpamdd52luqv2di */
    case 4954:  /* vpamdd52huqv4di */
    case 4952:  /* vpamdd52luqv4di */
    case 4950:  /* vpamdd52huqv8di */
    case 4948:  /* vpamdd52luqv8di */
    case 4941:  /* sha256rnds2 */
    case 4938:  /* sha1rnds4 */
    case 4909:  /* *avx512bw_dbpsadbwv32hi */
    case 4907:  /* *avx512bw_dbpsadbwv16hi */
    case 4905:  /* *avx512bw_dbpsadbwv8hi */
    case 4857:  /* avx512dq_rangepv2df */
    case 4855:  /* avx512dq_rangepv4df */
    case 4851:  /* avx512dq_rangepv8df */
    case 4849:  /* avx512dq_rangepv4sf */
    case 4847:  /* avx512dq_rangepv8sf */
    case 4843:  /* avx512dq_rangepv16sf */
    case 4842:  /* avx512vl_expandv2df_mask */
    case 4841:  /* avx512vl_expandv2di_mask */
    case 4840:  /* avx512vl_expandv4sf_mask */
    case 4839:  /* avx512vl_expandv4si_mask */
    case 4838:  /* avx512vl_expandv4df_mask */
    case 4837:  /* avx512vl_expandv4di_mask */
    case 4836:  /* avx512vl_expandv8sf_mask */
    case 4835:  /* avx512vl_expandv8si_mask */
    case 4834:  /* avx512f_expandv8df_mask */
    case 4833:  /* avx512f_expandv8di_mask */
    case 4832:  /* avx512f_expandv16sf_mask */
    case 4831:  /* avx512f_expandv16si_mask */
    case 4818:  /* avx512vl_compressv2df_mask */
    case 4817:  /* avx512vl_compressv2di_mask */
    case 4816:  /* avx512vl_compressv4sf_mask */
    case 4815:  /* avx512vl_compressv4si_mask */
    case 4814:  /* avx512vl_compressv4df_mask */
    case 4813:  /* avx512vl_compressv4di_mask */
    case 4812:  /* avx512vl_compressv8sf_mask */
    case 4811:  /* avx512vl_compressv8si_mask */
    case 4810:  /* avx512f_compressv8df_mask */
    case 4809:  /* avx512f_compressv8di_mask */
    case 4808:  /* avx512f_compressv16sf_mask */
    case 4807:  /* avx512f_compressv16si_mask */
    case 4459:  /* *avx_vperm2f128v4df_full */
    case 4458:  /* *avx_vperm2f128v8sf_full */
    case 4457:  /* *avx_vperm2f128v8si_full */
    case 4437:  /* avx512bw_vpermt2varv32hi3 */
    case 4435:  /* avx512vl_vpermt2varv16hi3 */
    case 4433:  /* avx512vl_vpermt2varv8hi3 */
    case 4431:  /* avx512vl_vpermt2varv32qi3 */
    case 4429:  /* avx512vl_vpermt2varv16qi3 */
    case 4427:  /* avx512bw_vpermt2varv64qi3 */
    case 4425:  /* avx512vl_vpermt2varv2df3 */
    case 4423:  /* avx512vl_vpermt2varv2di3 */
    case 4421:  /* avx512vl_vpermt2varv4sf3 */
    case 4419:  /* avx512vl_vpermt2varv4si3 */
    case 4417:  /* avx512vl_vpermt2varv4df3 */
    case 4415:  /* avx512vl_vpermt2varv4di3 */
    case 4413:  /* avx512vl_vpermt2varv8sf3 */
    case 4411:  /* avx512vl_vpermt2varv8si3 */
    case 4409:  /* avx512f_vpermt2varv8df3 */
    case 4407:  /* avx512f_vpermt2varv8di3 */
    case 4405:  /* avx512f_vpermt2varv16sf3 */
    case 4403:  /* avx512f_vpermt2varv16si3 */
    case 4383:  /* avx512bw_vpermi2varv32hi3 */
    case 4381:  /* avx512vl_vpermi2varv16hi3 */
    case 4379:  /* avx512vl_vpermi2varv8hi3 */
    case 4377:  /* avx512vl_vpermi2varv32qi3 */
    case 4375:  /* avx512vl_vpermi2varv16qi3 */
    case 4373:  /* avx512bw_vpermi2varv64qi3 */
    case 4371:  /* avx512vl_vpermi2varv2df3 */
    case 4369:  /* avx512vl_vpermi2varv2di3 */
    case 4367:  /* avx512vl_vpermi2varv4sf3 */
    case 4365:  /* avx512vl_vpermi2varv4si3 */
    case 4363:  /* avx512vl_vpermi2varv4df3 */
    case 4361:  /* avx512vl_vpermi2varv4di3 */
    case 4359:  /* avx512vl_vpermi2varv8sf3 */
    case 4357:  /* avx512vl_vpermi2varv8si3 */
    case 4355:  /* avx512f_vpermi2varv8df3 */
    case 4353:  /* avx512f_vpermi2varv8di3 */
    case 4351:  /* avx512f_vpermi2varv16sf3 */
    case 4349:  /* avx512f_vpermi2varv16si3 */
    case 4181:  /* avx2_permv2ti */
    case 4126:  /* pclmulqdq */
    case 4115:  /* xop_pcom_tfv2di3 */
    case 4114:  /* xop_pcom_tfv4si3 */
    case 4113:  /* xop_pcom_tfv8hi3 */
    case 4112:  /* xop_pcom_tfv16qi3 */
    case 4068:  /* xop_pperm */
    case 3867:  /* sse4_1_pblendvb */
    case 3866:  /* avx2_pblendvb */
    case 3859:  /* sse4_1_mpsadbw */
    case 3858:  /* avx2_mpsadbw */
    case 3854:  /* sse4_1_dppd */
    case 3853:  /* avx_dppd256 */
    case 3852:  /* sse4_1_dpps */
    case 3851:  /* avx_dpps256 */
    case 3850:  /* sse4_1_blendvpd */
    case 3849:  /* avx_blendvpd256 */
    case 3848:  /* sse4_1_blendvps */
    case 3847:  /* avx_blendvps256 */
    case 3839:  /* sse4a_extrqi */
    case 3807:  /* ssse3_palignrdi */
    case 3806:  /* ssse3_palignrti */
    case 3805:  /* avx2_palignrv2ti */
    case 3804:  /* avx512bw_palignrv4ti */
    case 2657:  /* *avx512vl_alignv2di */
    case 2655:  /* *avx512vl_alignv4di */
    case 2653:  /* *avx512f_alignv8di */
    case 2651:  /* *avx512vl_alignv4si */
    case 2649:  /* *avx512vl_alignv8si */
    case 2647:  /* *avx512f_alignv16si */
    case 2039:  /* *fma_fmaddsub_v2df */
    case 2037:  /* *fma_fmaddsub_v4df */
    case 2033:  /* *fma_fmaddsub_v8df */
    case 2032:  /* *fma_fmaddsub_df */
    case 2030:  /* *fma_fmaddsub_v4sf */
    case 2028:  /* *fma_fmaddsub_v8sf */
    case 2024:  /* *fma_fmaddsub_v16sf */
    case 2023:  /* *fma_fmaddsub_sf */
    case 2022:  /* *fma_fmaddsub_v2df */
    case 2021:  /* *fma_fmaddsub_v4df */
    case 2020:  /* *fma_fmaddsub_v4sf */
    case 2019:  /* *fma_fmaddsub_v8sf */
    case 1749:  /* avx512vl_ucmpv2di3 */
    case 1747:  /* avx512vl_ucmpv4di3 */
    case 1745:  /* avx512f_ucmpv8di3 */
    case 1743:  /* avx512vl_ucmpv4si3 */
    case 1741:  /* avx512vl_ucmpv8si3 */
    case 1739:  /* avx512f_ucmpv16si3 */
    case 1737:  /* avx512vl_ucmpv8hi3 */
    case 1735:  /* avx512vl_ucmpv16hi3 */
    case 1733:  /* avx512bw_ucmpv32hi3 */
    case 1731:  /* avx512vl_ucmpv32qi3 */
    case 1729:  /* avx512vl_ucmpv16qi3 */
    case 1727:  /* avx512bw_ucmpv64qi3 */
    case 1725:  /* avx512vl_cmpv8hi3 */
    case 1723:  /* avx512vl_cmpv16hi3 */
    case 1721:  /* avx512bw_cmpv32hi3 */
    case 1719:  /* avx512vl_cmpv32qi3 */
    case 1717:  /* avx512vl_cmpv16qi3 */
    case 1715:  /* avx512bw_cmpv64qi3 */
    case 1713:  /* avx512vl_cmpv2df3 */
    case 1711:  /* avx512vl_cmpv4df3 */
    case 1707:  /* avx512f_cmpv8df3 */
    case 1705:  /* avx512vl_cmpv4sf3 */
    case 1703:  /* avx512vl_cmpv8sf3 */
    case 1699:  /* avx512f_cmpv16sf3 */
    case 1697:  /* avx512vl_cmpv2di3 */
    case 1695:  /* avx512vl_cmpv4di3 */
    case 1691:  /* avx512f_cmpv8di3 */
    case 1689:  /* avx512vl_cmpv4si3 */
    case 1687:  /* avx512vl_cmpv8si3 */
    case 1683:  /* avx512f_cmpv16si3 */
    case 1670:  /* avx_cmpv2df3 */
    case 1669:  /* avx_cmpv4df3 */
    case 1668:  /* avx_cmpv4sf3 */
    case 1667:  /* avx_cmpv8sf3 */
    case 501:  /* copysigntf3_const */
    case 500:  /* copysigndf3_const */
    case 499:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1392:  /* *absnegv2df2 */
    case 1391:  /* *absnegv4df2 */
    case 1390:  /* *absnegv8df2 */
    case 1389:  /* *absnegv4sf2 */
    case 1388:  /* *absnegv8sf2 */
    case 1387:  /* *absnegv16sf2 */
    case 486:  /* *absnegtf2_sse */
    case 485:  /* *absnegxf2_i387 */
    case 484:  /* *absnegdf2_i387 */
    case 483:  /* *absnegsf2_i387 */
    case 482:  /* *absnegdf2_mixed */
    case 481:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 480:  /* *negvdi3 */
    case 479:  /* *negvsi3 */
    case 478:  /* *negvhi3 */
    case 477:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 476:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 513:  /* *one_cmpldi2_2 */
    case 512:  /* *one_cmplsi2_2 */
    case 511:  /* *one_cmplhi2_2 */
    case 510:  /* *one_cmplqi2_2 */
    case 475:  /* *negdi2_cmpz */
    case 474:  /* *negsi2_cmpz */
    case 473:  /* *neghi2_cmpz */
    case 472:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 471:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 447:  /* *xorsi_2_zext_imm */
    case 446:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 443:  /* kunpckdi */
    case 442:  /* kunpcksi */
    case 441:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 464:  /* *xorqi_cc_ext_1 */
    case 407:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 449:  /* *xorqi_2_slp */
    case 448:  /* *iorqi_2_slp */
    case 405:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 815:  /* *tls_local_dynamic_base_64_di */
    case 814:  /* *tls_local_dynamic_base_64_si */
    case 747:  /* *bmi_andn_di */
    case 746:  /* *bmi_andn_si */
    case 692:  /* *sibcall_value_memory */
    case 691:  /* *sibcall_value_memory */
    case 424:  /* *xorsi_1_zext_imm */
    case 423:  /* *iorsi_1_zext_imm */
    case 416:  /* *andndi3_doubleword */
    case 398:  /* kandnhi */
    case 397:  /* kandnqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 4573:  /* avx_vec_concatv8df */
    case 4572:  /* avx_vec_concatv16sf */
    case 4571:  /* avx_vec_concatv8di */
    case 4570:  /* avx_vec_concatv16si */
    case 4569:  /* avx_vec_concatv32hi */
    case 4568:  /* avx_vec_concatv64qi */
    case 4567:  /* avx_vec_concatv4df */
    case 4566:  /* avx_vec_concatv8sf */
    case 4565:  /* avx_vec_concatv4di */
    case 4564:  /* avx_vec_concatv8si */
    case 4563:  /* avx_vec_concatv16hi */
    case 4562:  /* avx_vec_concatv32qi */
    case 4560:  /* avx512bw_lshrvv32hi */
    case 4558:  /* avx512bw_ashlvv32hi */
    case 4556:  /* avx512vl_lshrvv16hi */
    case 4554:  /* avx512vl_ashlvv16hi */
    case 4552:  /* avx512vl_lshrvv8hi */
    case 4550:  /* avx512vl_ashlvv8hi */
    case 4548:  /* avx2_lshrvv2di */
    case 4546:  /* avx2_ashlvv2di */
    case 4544:  /* avx2_lshrvv4di */
    case 4542:  /* avx2_ashlvv4di */
    case 4540:  /* avx512f_lshrvv8di */
    case 4538:  /* avx512f_ashlvv8di */
    case 4536:  /* avx2_lshrvv4si */
    case 4534:  /* avx2_ashlvv4si */
    case 4532:  /* avx2_lshrvv8si */
    case 4530:  /* avx2_ashlvv8si */
    case 4528:  /* avx512f_lshrvv16si */
    case 4526:  /* avx512f_ashlvv16si */
    case 4524:  /* avx512bw_ashrvv32hi */
    case 4522:  /* avx512vl_ashrvv16hi */
    case 4520:  /* avx512vl_ashrvv8hi */
    case 4518:  /* avx512f_ashrvv8di */
    case 4516:  /* avx2_ashrvv4di */
    case 4514:  /* avx2_ashrvv2di */
    case 4512:  /* avx512f_ashrvv16si */
    case 4510:  /* avx2_ashrvv8si */
    case 4508:  /* avx2_ashrvv4si */
    case 4079:  /* xop_rotrv2di3 */
    case 4078:  /* xop_rotrv4si3 */
    case 4077:  /* xop_rotrv8hi3 */
    case 4076:  /* xop_rotrv16qi3 */
    case 4075:  /* xop_rotlv2di3 */
    case 4074:  /* xop_rotlv4si3 */
    case 4073:  /* xop_rotlv8hi3 */
    case 4072:  /* xop_rotlv16qi3 */
    case 3713:  /* vec_concatv2di */
    case 3712:  /* *vec_concatv4si */
    case 3711:  /* *vec_concatv2si */
    case 3710:  /* *vec_concatv2si_sse4_1 */
    case 3526:  /* *xorv8hi3 */
    case 3524:  /* *iorv8hi3 */
    case 3522:  /* *andv8hi3 */
    case 3520:  /* *xorv16hi3 */
    case 3518:  /* *iorv16hi3 */
    case 3516:  /* *andv16hi3 */
    case 3514:  /* *xorv32hi3 */
    case 3512:  /* *iorv32hi3 */
    case 3510:  /* *andv32hi3 */
    case 3508:  /* *xorv16qi3 */
    case 3506:  /* *iorv16qi3 */
    case 3504:  /* *andv16qi3 */
    case 3502:  /* *xorv32qi3 */
    case 3500:  /* *iorv32qi3 */
    case 3498:  /* *andv32qi3 */
    case 3496:  /* *xorv64qi3 */
    case 3494:  /* *iorv64qi3 */
    case 3492:  /* *andv64qi3 */
    case 3490:  /* *xorv2di3 */
    case 3488:  /* *iorv2di3 */
    case 3486:  /* *andv2di3 */
    case 3484:  /* *xorv4di3 */
    case 3482:  /* *iorv4di3 */
    case 3480:  /* *andv4di3 */
    case 3478:  /* *xorv8di3 */
    case 3476:  /* *iorv8di3 */
    case 3474:  /* *andv8di3 */
    case 3472:  /* *xorv4si3 */
    case 3470:  /* *iorv4si3 */
    case 3468:  /* *andv4si3 */
    case 3466:  /* *xorv8si3 */
    case 3464:  /* *iorv8si3 */
    case 3462:  /* *andv8si3 */
    case 3460:  /* *xorv16si3 */
    case 3458:  /* *iorv16si3 */
    case 3456:  /* *andv16si3 */
    case 3437:  /* sse2_gtv4si3 */
    case 3436:  /* sse2_gtv8hi3 */
    case 3435:  /* sse2_gtv16qi3 */
    case 3410:  /* avx2_gtv4di3 */
    case 3409:  /* avx2_gtv8si3 */
    case 3408:  /* avx2_gtv16hi3 */
    case 3407:  /* avx2_gtv32qi3 */
    case 3406:  /* sse4_2_gtv2di3 */
    case 3405:  /* *sse2_eqv4si3 */
    case 3404:  /* *sse2_eqv8hi3 */
    case 3403:  /* *sse2_eqv16qi3 */
    case 3402:  /* *sse4_1_eqv2di3 */
    case 3377:  /* *avx2_eqv4di3 */
    case 3376:  /* *avx2_eqv8si3 */
    case 3375:  /* *avx2_eqv16hi3 */
    case 3374:  /* *avx2_eqv32qi3 */
    case 3373:  /* *uminv16qi3 */
    case 3372:  /* *umaxv16qi3 */
    case 3370:  /* *sse4_1_uminv4si3 */
    case 3368:  /* *sse4_1_umaxv4si3 */
    case 3366:  /* *sse4_1_uminv8hi3 */
    case 3364:  /* *sse4_1_umaxv8hi3 */
    case 3363:  /* *sminv8hi3 */
    case 3362:  /* *smaxv8hi3 */
    case 3360:  /* *sse4_1_sminv4si3 */
    case 3358:  /* *sse4_1_smaxv4si3 */
    case 3356:  /* *sse4_1_sminv16qi3 */
    case 3354:  /* *sse4_1_smaxv16qi3 */
    case 3352:  /* *uminv8hi3 */
    case 3350:  /* *umaxv8hi3 */
    case 3348:  /* *sminv8hi3 */
    case 3346:  /* *smaxv8hi3 */
    case 3344:  /* *uminv16hi3 */
    case 3342:  /* *umaxv16hi3 */
    case 3340:  /* *sminv16hi3 */
    case 3338:  /* *smaxv16hi3 */
    case 3336:  /* *uminv32hi3 */
    case 3334:  /* *umaxv32hi3 */
    case 3332:  /* *sminv32hi3 */
    case 3330:  /* *smaxv32hi3 */
    case 3328:  /* *uminv32qi3 */
    case 3326:  /* *umaxv32qi3 */
    case 3324:  /* *sminv32qi3 */
    case 3322:  /* *smaxv32qi3 */
    case 3320:  /* *uminv16qi3 */
    case 3318:  /* *umaxv16qi3 */
    case 3316:  /* *sminv16qi3 */
    case 3314:  /* *smaxv16qi3 */
    case 3312:  /* *uminv64qi3 */
    case 3310:  /* *umaxv64qi3 */
    case 3308:  /* *sminv64qi3 */
    case 3306:  /* *smaxv64qi3 */
    case 3304:  /* *avx512f_uminv2di3 */
    case 3302:  /* *avx512f_umaxv2di3 */
    case 3300:  /* *avx512f_sminv2di3 */
    case 3298:  /* *avx512f_smaxv2di3 */
    case 3296:  /* *avx512f_uminv4di3 */
    case 3294:  /* *avx512f_umaxv4di3 */
    case 3292:  /* *avx512f_sminv4di3 */
    case 3290:  /* *avx512f_smaxv4di3 */
    case 3288:  /* *avx512f_uminv8di3 */
    case 3286:  /* *avx512f_umaxv8di3 */
    case 3284:  /* *avx512f_sminv8di3 */
    case 3282:  /* *avx512f_smaxv8di3 */
    case 3280:  /* *avx512f_uminv4si3 */
    case 3278:  /* *avx512f_umaxv4si3 */
    case 3276:  /* *avx512f_sminv4si3 */
    case 3274:  /* *avx512f_smaxv4si3 */
    case 3272:  /* *avx512f_uminv8si3 */
    case 3270:  /* *avx512f_umaxv8si3 */
    case 3268:  /* *avx512f_sminv8si3 */
    case 3266:  /* *avx512f_smaxv8si3 */
    case 3264:  /* *avx512f_uminv16si3 */
    case 3262:  /* *avx512f_umaxv16si3 */
    case 3260:  /* *avx512f_sminv16si3 */
    case 3258:  /* *avx512f_smaxv16si3 */
    case 3257:  /* *avx2_uminv8si3 */
    case 3256:  /* *avx2_umaxv8si3 */
    case 3255:  /* *avx2_sminv8si3 */
    case 3254:  /* *avx2_smaxv8si3 */
    case 3253:  /* *avx2_uminv16hi3 */
    case 3252:  /* *avx2_umaxv16hi3 */
    case 3251:  /* *avx2_sminv16hi3 */
    case 3250:  /* *avx2_smaxv16hi3 */
    case 3249:  /* *avx2_uminv32qi3 */
    case 3248:  /* *avx2_umaxv32qi3 */
    case 3247:  /* *avx2_sminv32qi3 */
    case 3246:  /* *avx2_smaxv32qi3 */
    case 3244:  /* avx512vl_rorv2di */
    case 3242:  /* avx512vl_rolv2di */
    case 3240:  /* avx512vl_rorv4di */
    case 3238:  /* avx512vl_rolv4di */
    case 3236:  /* avx512f_rorv8di */
    case 3234:  /* avx512f_rolv8di */
    case 3232:  /* avx512vl_rorv4si */
    case 3230:  /* avx512vl_rolv4si */
    case 3228:  /* avx512vl_rorv8si */
    case 3226:  /* avx512vl_rolv8si */
    case 3224:  /* avx512f_rorv16si */
    case 3222:  /* avx512f_rolv16si */
    case 3220:  /* avx512vl_rorvv2di */
    case 3218:  /* avx512vl_rolvv2di */
    case 3216:  /* avx512vl_rorvv4di */
    case 3214:  /* avx512vl_rolvv4di */
    case 3212:  /* avx512f_rorvv8di */
    case 3210:  /* avx512f_rolvv8di */
    case 3208:  /* avx512vl_rorvv4si */
    case 3206:  /* avx512vl_rolvv4si */
    case 3204:  /* avx512vl_rorvv8si */
    case 3202:  /* avx512vl_rolvv8si */
    case 3200:  /* avx512f_rorvv16si */
    case 3198:  /* avx512f_rolvv16si */
    case 3197:  /* sse2_lshrv1ti3 */
    case 3196:  /* avx2_lshrv2ti3 */
    case 3195:  /* avx512bw_lshrv4ti3 */
    case 3194:  /* sse2_ashlv1ti3 */
    case 3193:  /* avx2_ashlv2ti3 */
    case 3192:  /* avx512bw_ashlv4ti3 */
    case 3190:  /* lshrv8di3 */
    case 3188:  /* ashlv8di3 */
    case 3186:  /* lshrv16si3 */
    case 3184:  /* ashlv16si3 */
    case 3182:  /* lshrv2di3 */
    case 3180:  /* ashlv2di3 */
    case 3178:  /* lshrv4di3 */
    case 3176:  /* ashlv4di3 */
    case 3174:  /* lshrv4si3 */
    case 3172:  /* ashlv4si3 */
    case 3170:  /* lshrv8si3 */
    case 3168:  /* ashlv8si3 */
    case 3166:  /* lshrv8hi3 */
    case 3164:  /* ashlv8hi3 */
    case 3162:  /* lshrv16hi3 */
    case 3160:  /* ashlv16hi3 */
    case 3158:  /* lshrv32hi3 */
    case 3156:  /* ashlv32hi3 */
    case 3154:  /* ashrv8di3 */
    case 3152:  /* ashrv16si3 */
    case 3150:  /* ashrv4di3 */
    case 3148:  /* ashrv32hi3 */
    case 3146:  /* *ashrv2di3 */
    case 3144:  /* *ashrv4si3 */
    case 3142:  /* *ashrv8si3 */
    case 3140:  /* *ashrv8hi3 */
    case 3138:  /* *ashrv16hi3 */
    case 3137:  /* ashrv4si3 */
    case 3136:  /* ashrv8si3 */
    case 3135:  /* ashrv8hi3 */
    case 3134:  /* ashrv16hi3 */
    case 3132:  /* *sse4_1_mulv4si3 */
    case 3130:  /* *avx2_mulv8si3 */
    case 3128:  /* *avx512f_mulv16si3 */
    case 3126:  /* avx512dq_mulv2di3 */
    case 3124:  /* avx512dq_mulv4di3 */
    case 3122:  /* avx512dq_mulv8di3 */
    case 3088:  /* *mulv8hi3 */
    case 3086:  /* *mulv16hi3 */
    case 3084:  /* *mulv32hi3 */
    case 3082:  /* *sse2_ussubv8hi3 */
    case 3080:  /* *sse2_sssubv8hi3 */
    case 3078:  /* *sse2_usaddv8hi3 */
    case 3076:  /* *sse2_ssaddv8hi3 */
    case 3074:  /* *avx2_ussubv16hi3 */
    case 3072:  /* *avx2_sssubv16hi3 */
    case 3070:  /* *avx2_usaddv16hi3 */
    case 3068:  /* *avx2_ssaddv16hi3 */
    case 3066:  /* *avx512bw_ussubv32hi3 */
    case 3064:  /* *avx512bw_sssubv32hi3 */
    case 3062:  /* *avx512bw_usaddv32hi3 */
    case 3060:  /* *avx512bw_ssaddv32hi3 */
    case 3058:  /* *sse2_ussubv16qi3 */
    case 3056:  /* *sse2_sssubv16qi3 */
    case 3054:  /* *sse2_usaddv16qi3 */
    case 3052:  /* *sse2_ssaddv16qi3 */
    case 3050:  /* *avx2_ussubv32qi3 */
    case 3048:  /* *avx2_sssubv32qi3 */
    case 3046:  /* *avx2_usaddv32qi3 */
    case 3044:  /* *avx2_ssaddv32qi3 */
    case 3042:  /* *avx512bw_ussubv64qi3 */
    case 3040:  /* *avx512bw_sssubv64qi3 */
    case 3038:  /* *avx512bw_usaddv64qi3 */
    case 3036:  /* *avx512bw_ssaddv64qi3 */
    case 3010:  /* *subv2di3 */
    case 3008:  /* *addv2di3 */
    case 3006:  /* *subv4di3 */
    case 3004:  /* *addv4di3 */
    case 3002:  /* *subv8di3 */
    case 3000:  /* *addv8di3 */
    case 2998:  /* *subv4si3 */
    case 2996:  /* *addv4si3 */
    case 2994:  /* *subv8si3 */
    case 2992:  /* *addv8si3 */
    case 2990:  /* *subv16si3 */
    case 2988:  /* *addv16si3 */
    case 2986:  /* *subv8hi3 */
    case 2984:  /* *addv8hi3 */
    case 2982:  /* *subv16hi3 */
    case 2980:  /* *addv16hi3 */
    case 2978:  /* *subv32hi3 */
    case 2976:  /* *addv32hi3 */
    case 2974:  /* *subv16qi3 */
    case 2972:  /* *addv16qi3 */
    case 2970:  /* *subv32qi3 */
    case 2968:  /* *addv32qi3 */
    case 2966:  /* *subv64qi3 */
    case 2964:  /* *addv64qi3 */
    case 2765:  /* vec_concatv2df */
    case 2491:  /* *vec_concatv4sf */
    case 2490:  /* *vec_concatv2sf_sse */
    case 2489:  /* *vec_concatv2sf_sse4_1 */
    case 1832:  /* *xortf3 */
    case 1831:  /* *iortf3 */
    case 1830:  /* *andtf3 */
    case 1829:  /* *xordf3 */
    case 1828:  /* *iordf3 */
    case 1827:  /* *anddf3 */
    case 1826:  /* *xorsf3 */
    case 1825:  /* *iorsf3 */
    case 1824:  /* *andsf3 */
    case 1819:  /* *xorv8df3 */
    case 1817:  /* *iorv8df3 */
    case 1815:  /* *andv8df3 */
    case 1813:  /* *xorv16sf3 */
    case 1811:  /* *iorv16sf3 */
    case 1809:  /* *andv16sf3 */
    case 1807:  /* *xorv2df3 */
    case 1805:  /* *iorv2df3 */
    case 1803:  /* *andv2df3 */
    case 1801:  /* *xorv4df3 */
    case 1799:  /* *iorv4df3 */
    case 1797:  /* *andv4df3 */
    case 1795:  /* *xorv4sf3 */
    case 1793:  /* *iorv4sf3 */
    case 1791:  /* *andv4sf3 */
    case 1789:  /* *xorv8sf3 */
    case 1787:  /* *iorv8sf3 */
    case 1785:  /* *andv8sf3 */
    case 1595:  /* *sminv2df3 */
    case 1591:  /* *smaxv2df3 */
    case 1587:  /* *sminv4df3 */
    case 1583:  /* *smaxv4df3 */
    case 1579:  /* *sminv8df3 */
    case 1575:  /* *smaxv8df3 */
    case 1571:  /* *sminv4sf3 */
    case 1567:  /* *smaxv4sf3 */
    case 1563:  /* *sminv8sf3 */
    case 1559:  /* *smaxv8sf3 */
    case 1555:  /* *sminv16sf3 */
    case 1551:  /* *smaxv16sf3 */
    case 1495:  /* sse2_divv2df3 */
    case 1493:  /* avx_divv4df3 */
    case 1489:  /* avx512f_divv8df3 */
    case 1487:  /* sse_divv4sf3 */
    case 1485:  /* avx_divv8sf3 */
    case 1481:  /* avx512f_divv16sf3 */
    case 1469:  /* *mulv2df3 */
    case 1465:  /* *mulv4df3 */
    case 1461:  /* *mulv8df3 */
    case 1457:  /* *mulv4sf3 */
    case 1453:  /* *mulv8sf3 */
    case 1449:  /* *mulv16sf3 */
    case 1437:  /* *subv2df3 */
    case 1433:  /* *addv2df3 */
    case 1429:  /* *subv4df3 */
    case 1425:  /* *addv4df3 */
    case 1421:  /* *subv8df3 */
    case 1417:  /* *addv8df3 */
    case 1413:  /* *subv4sf3 */
    case 1409:  /* *addv4sf3 */
    case 1405:  /* *subv8sf3 */
    case 1401:  /* *addv8sf3 */
    case 1397:  /* *subv16sf3 */
    case 1393:  /* *addv16sf3 */
    case 1213:  /* *mmx_concatv2si */
    case 1197:  /* *mmx_xorv2si3 */
    case 1196:  /* *mmx_iorv2si3 */
    case 1195:  /* *mmx_andv2si3 */
    case 1194:  /* *mmx_xorv4hi3 */
    case 1193:  /* *mmx_iorv4hi3 */
    case 1192:  /* *mmx_andv4hi3 */
    case 1191:  /* *mmx_xorv8qi3 */
    case 1190:  /* *mmx_iorv8qi3 */
    case 1189:  /* *mmx_andv8qi3 */
    case 1185:  /* mmx_gtv2si3 */
    case 1184:  /* mmx_gtv4hi3 */
    case 1183:  /* mmx_gtv8qi3 */
    case 1182:  /* *mmx_eqv2si3 */
    case 1181:  /* *mmx_eqv4hi3 */
    case 1180:  /* *mmx_eqv8qi3 */
    case 1179:  /* mmx_lshrv1di3 */
    case 1178:  /* mmx_ashlv1di3 */
    case 1177:  /* mmx_lshrv2si3 */
    case 1176:  /* mmx_ashlv2si3 */
    case 1175:  /* mmx_lshrv4hi3 */
    case 1174:  /* mmx_ashlv4hi3 */
    case 1173:  /* mmx_ashrv2si3 */
    case 1172:  /* mmx_ashrv4hi3 */
    case 1171:  /* *mmx_uminv8qi3 */
    case 1170:  /* *mmx_umaxv8qi3 */
    case 1169:  /* *mmx_sminv4hi3 */
    case 1168:  /* *mmx_smaxv4hi3 */
    case 1162:  /* *mmx_mulv4hi3 */
    case 1161:  /* *mmx_ussubv4hi3 */
    case 1160:  /* *mmx_sssubv4hi3 */
    case 1159:  /* *mmx_usaddv4hi3 */
    case 1158:  /* *mmx_ssaddv4hi3 */
    case 1157:  /* *mmx_ussubv8qi3 */
    case 1156:  /* *mmx_sssubv8qi3 */
    case 1155:  /* *mmx_usaddv8qi3 */
    case 1154:  /* *mmx_ssaddv8qi3 */
    case 1153:  /* *mmx_subv1di3 */
    case 1152:  /* *mmx_addv1di3 */
    case 1151:  /* *mmx_subv2si3 */
    case 1150:  /* *mmx_addv2si3 */
    case 1149:  /* *mmx_subv4hi3 */
    case 1148:  /* *mmx_addv4hi3 */
    case 1147:  /* *mmx_subv8qi3 */
    case 1146:  /* *mmx_addv8qi3 */
    case 1143:  /* *mmx_concatv2sf */
    case 1136:  /* mmx_gev2sf3 */
    case 1135:  /* mmx_gtv2sf3 */
    case 1134:  /* *mmx_eqv2sf3 */
    case 1123:  /* *mmx_sminv2sf3 */
    case 1122:  /* *mmx_smaxv2sf3 */
    case 1121:  /* *mmx_mulv2sf3 */
    case 1120:  /* *mmx_subv2sf3 */
    case 1119:  /* *mmx_addv2sf3 */
    case 998:  /* smindf3 */
    case 997:  /* smaxdf3 */
    case 996:  /* sminsf3 */
    case 995:  /* smaxsf3 */
    case 605:  /* *bmi2_rorxdi3_1 */
    case 604:  /* *bmi2_rorxsi3_1 */
    case 563:  /* *bmi2_ashrdi3_1 */
    case 562:  /* *bmi2_lshrdi3_1 */
    case 561:  /* *bmi2_ashrsi3_1 */
    case 560:  /* *bmi2_lshrsi3_1 */
    case 530:  /* *bmi2_ashldi3_1 */
    case 529:  /* *bmi2_ashlsi3_1 */
    case 522:  /* *shiftrdi3 */
    case 521:  /* *shiftldi3 */
    case 520:  /* *shiftrsi3 */
    case 519:  /* *shiftlsi3 */
    case 518:  /* *shiftrhi3 */
    case 517:  /* *shiftlhi3 */
    case 516:  /* *shiftrqi3 */
    case 515:  /* *shiftlqi3 */
    case 389:  /* *kxordi */
    case 388:  /* *kordi */
    case 387:  /* *kanddi */
    case 386:  /* *kxorsi */
    case 385:  /* *korsi */
    case 384:  /* *kandsi */
    case 383:  /* *kxorhi */
    case 382:  /* *korhi */
    case 381:  /* *kandhi */
    case 380:  /* *kxorqi */
    case 379:  /* *korqi */
    case 378:  /* *kandqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 377:  /* *testqi_ext_3 */
    case 376:  /* *testqi_ext_3 */
    case 375:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 374:  /* *testqi_ext_2 */
    case 373:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 372:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 366:  /* udivmodhiqi3 */
    case 355:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 365:  /* *udivmoddi4_noext */
    case 364:  /* *udivmodsi4_noext */
    case 363:  /* *udivmodhi4_noext */
    case 354:  /* *divmoddi4_noext */
    case 353:  /* *divmodsi4_noext */
    case 352:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 362:  /* *udivmoddi4_pow2 */
    case 361:  /* *udivmodsi4_pow2 */
    case 360:  /* *udivmoddi4 */
    case 359:  /* *udivmodsi4 */
    case 358:  /* *udivmodhi4 */
    case 357:  /* udivmoddi4_1 */
    case 356:  /* udivmodsi4_1 */
    case 351:  /* *divmoddi4 */
    case 350:  /* *divmodsi4 */
    case 349:  /* *divmodhi4 */
    case 348:  /* divmoddi4_1 */
    case 347:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 346:  /* *umulsi3_highpart_zext */
    case 345:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 344:  /* *umulsi3_highpart_1 */
    case 343:  /* *smulsi3_highpart_1 */
    case 342:  /* *umuldi3_highpart_1 */
    case 341:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 340:  /* *umulqihi3_1 */
    case 339:  /* *mulqihi3_1 */
    case 338:  /* *mulditi3_1 */
    case 337:  /* *mulsidi3_1 */
    case 336:  /* *umulditi3_1 */
    case 335:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 334:  /* *bmi2_umulditi3_1 */
    case 333:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 330:  /* *umulvdi4 */
    case 329:  /* *umulvsi4 */
    case 328:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 316:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 315:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 314:  /* *adddi3_cc_overflow_2 */
    case 313:  /* *addsi3_cc_overflow_2 */
    case 312:  /* *addhi3_cc_overflow_2 */
    case 311:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 310:  /* *adddi3_cc_overflow_1 */
    case 309:  /* *addsi3_cc_overflow_1 */
    case 308:  /* *addhi3_cc_overflow_1 */
    case 307:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 306:  /* *adddi3_cconly_overflow_2 */
    case 305:  /* *addsi3_cconly_overflow_2 */
    case 304:  /* *addhi3_cconly_overflow_2 */
    case 303:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 302:  /* *adddi3_cconly_overflow_1 */
    case 301:  /* *addsi3_cconly_overflow_1 */
    case 300:  /* *addhi3_cconly_overflow_1 */
    case 299:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 298:  /* subborrowdi */
    case 297:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 296:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 295:  /* subdi3_carry */
    case 294:  /* subsi3_carry */
    case 293:  /* subhi3_carry */
    case 292:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 291:  /* addcarrydi */
    case 290:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[4] = 1;
      break;

    case 289:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 288:  /* adddi3_carry */
    case 287:  /* addsi3_carry */
    case 286:  /* addhi3_carry */
    case 285:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 284:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 283:  /* *subdi_3 */
    case 282:  /* *subsi_3 */
    case 281:  /* *subhi_3 */
    case 280:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 256:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4028:  /* xop_pmacssdd */
    case 4027:  /* xop_pmacsdd */
    case 4026:  /* xop_pmacssww */
    case 4025:  /* xop_pmacsww */
    case 258:  /* *lea_general_4 */
    case 257:  /* *lea_general_4 */
    case 255:  /* *lea_general_2 */
    case 254:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 327:  /* *mulvdi4_1 */
    case 326:  /* *mulvsi4_1 */
    case 325:  /* *mulvhi4_1 */
    case 279:  /* *subvdi4_1 */
    case 278:  /* *subvsi4_1 */
    case 277:  /* *subvhi4_1 */
    case 276:  /* *subvqi4_1 */
    case 253:  /* *addvdi4_1 */
    case 252:  /* *addvsi4_1 */
    case 251:  /* *addvhi4_1 */
    case 250:  /* *addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 332:  /* *umulvqi4 */
    case 331:  /* *mulvqi4 */
    case 324:  /* *mulvhi4 */
    case 323:  /* *mulvdi4 */
    case 322:  /* *mulvsi4 */
    case 275:  /* *subvdi4 */
    case 274:  /* *subvsi4 */
    case 273:  /* *subvhi4 */
    case 272:  /* *subvqi4 */
    case 249:  /* *addvdi4 */
    case 248:  /* *addvsi4 */
    case 247:  /* *addvhi4 */
    case 246:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 463:  /* *xorqi_ext_2 */
    case 462:  /* *iorqi_ext_2 */
    case 461:  /* *xorqi_ext_1 */
    case 460:  /* *iorqi_ext_1 */
    case 409:  /* *andqi_ext_2 */
    case 408:  /* *andqi_ext_1 */
    case 245:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 459:  /* *xorqi_ext_0 */
    case 458:  /* *iorqi_ext_0 */
    case 406:  /* andqi_ext_0 */
    case 244:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 595:  /* *ashrdi3_cconly */
    case 594:  /* *lshrdi3_cconly */
    case 593:  /* *ashrsi3_cconly */
    case 592:  /* *lshrsi3_cconly */
    case 591:  /* *ashrhi3_cconly */
    case 590:  /* *lshrhi3_cconly */
    case 589:  /* *ashrqi3_cconly */
    case 588:  /* *lshrqi3_cconly */
    case 546:  /* *ashldi3_cconly */
    case 545:  /* *ashlsi3_cconly */
    case 544:  /* *ashlhi3_cconly */
    case 543:  /* *ashlqi3_cconly */
    case 457:  /* *xordi_3 */
    case 456:  /* *iordi_3 */
    case 455:  /* *xorsi_3 */
    case 454:  /* *iorsi_3 */
    case 453:  /* *xorhi_3 */
    case 452:  /* *iorhi_3 */
    case 451:  /* *xorqi_3 */
    case 450:  /* *iorqi_3 */
    case 243:  /* *adddi_5 */
    case 242:  /* *addsi_5 */
    case 241:  /* *addhi_5 */
    case 240:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 235:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 234:  /* *adddi_3 */
    case 233:  /* *addsi_3 */
    case 232:  /* *addhi_3 */
    case 231:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 587:  /* *ashrsi3_cmp_zext */
    case 586:  /* *lshrsi3_cmp_zext */
    case 542:  /* *ashlsi3_cmp_zext */
    case 445:  /* *xorsi_2_zext */
    case 444:  /* *iorsi_2_zext */
    case 404:  /* *andsi_2_zext */
    case 271:  /* *subsi_2_zext */
    case 230:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 585:  /* *ashrdi3_cmp */
    case 584:  /* *lshrdi3_cmp */
    case 583:  /* *ashrsi3_cmp */
    case 582:  /* *lshrsi3_cmp */
    case 581:  /* *ashrhi3_cmp */
    case 580:  /* *lshrhi3_cmp */
    case 579:  /* *ashrqi3_cmp */
    case 578:  /* *lshrqi3_cmp */
    case 541:  /* *ashldi3_cmp */
    case 540:  /* *ashlsi3_cmp */
    case 539:  /* *ashlhi3_cmp */
    case 538:  /* *ashlqi3_cmp */
    case 434:  /* *xordi_2 */
    case 433:  /* *iordi_2 */
    case 432:  /* *xorsi_2 */
    case 431:  /* *iorsi_2 */
    case 430:  /* *xorhi_2 */
    case 429:  /* *iorhi_2 */
    case 428:  /* *xorqi_2 */
    case 427:  /* *iorqi_2 */
    case 403:  /* *andsi_2 */
    case 402:  /* *andhi_2 */
    case 401:  /* *andqi_2 */
    case 400:  /* *andqi_2_maybe_si */
    case 399:  /* *anddi_2 */
    case 270:  /* *subdi_2 */
    case 269:  /* *subsi_2 */
    case 268:  /* *subhi_2 */
    case 267:  /* *subqi_2 */
    case 229:  /* *adddi_2 */
    case 228:  /* *addsi_2 */
    case 227:  /* *addhi_2 */
    case 226:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 618:  /* *rotrqi3_1_slp */
    case 617:  /* *rotlqi3_1_slp */
    case 577:  /* *ashrqi3_1_slp */
    case 576:  /* *lshrqi3_1_slp */
    case 537:  /* *ashlqi3_1_slp */
    case 426:  /* *xorqi_1_slp */
    case 425:  /* *iorqi_1_slp */
    case 396:  /* *andqi_1_slp */
    case 266:  /* *subqi_1_slp */
    case 225:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 612:  /* *rotrsi3_1_zext */
    case 611:  /* *rotlsi3_1_zext */
    case 571:  /* *ashrsi3_1_zext */
    case 570:  /* *lshrsi3_1_zext */
    case 559:  /* *ashrsi3_cvt_zext */
    case 534:  /* *ashlsi3_1_zext */
    case 438:  /* kxnordi */
    case 437:  /* kxnorsi */
    case 436:  /* kxnorhi */
    case 435:  /* kxnorqi */
    case 422:  /* *xorsi_1_zext */
    case 421:  /* *iorsi_1_zext */
    case 393:  /* *andsi_1_zext */
    case 320:  /* *mulsi3_1_zext */
    case 265:  /* *subsi_1_zext */
    case 222:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1006:  /* pro_epilogue_adjust_stack_di_sub */
    case 1005:  /* pro_epilogue_adjust_stack_si_sub */
    case 1004:  /* pro_epilogue_adjust_stack_di_add */
    case 1003:  /* pro_epilogue_adjust_stack_si_add */
    case 616:  /* *rotrhi3_1 */
    case 615:  /* *rotlhi3_1 */
    case 614:  /* *rotrqi3_1 */
    case 613:  /* *rotlqi3_1 */
    case 609:  /* *rotrdi3_1 */
    case 608:  /* *rotldi3_1 */
    case 607:  /* *rotrsi3_1 */
    case 606:  /* *rotlsi3_1 */
    case 575:  /* *ashrhi3_1 */
    case 574:  /* *lshrhi3_1 */
    case 573:  /* *ashrqi3_1 */
    case 572:  /* *lshrqi3_1 */
    case 567:  /* *ashrdi3_1 */
    case 566:  /* *lshrdi3_1 */
    case 565:  /* *ashrsi3_1 */
    case 564:  /* *lshrsi3_1 */
    case 558:  /* ashrsi3_cvt */
    case 557:  /* ashrdi3_cvt */
    case 554:  /* *ashrti3_doubleword */
    case 553:  /* *lshrti3_doubleword */
    case 552:  /* *ashrdi3_doubleword */
    case 551:  /* *lshrdi3_doubleword */
    case 536:  /* *ashlqi3_1 */
    case 535:  /* *ashlhi3_1 */
    case 532:  /* *ashldi3_1 */
    case 531:  /* *ashlsi3_1 */
    case 524:  /* *ashlti3_doubleword */
    case 523:  /* *ashldi3_doubleword */
    case 420:  /* *xorqi_1 */
    case 419:  /* *iorqi_1 */
    case 418:  /* *xorhi_1 */
    case 417:  /* *iorhi_1 */
    case 415:  /* *xordi3_doubleword */
    case 414:  /* *iordi3_doubleword */
    case 413:  /* *xordi_1 */
    case 412:  /* *iordi_1 */
    case 411:  /* *xorsi_1 */
    case 410:  /* *iorsi_1 */
    case 395:  /* *andqi_1 */
    case 394:  /* *andhi_1 */
    case 392:  /* *andsi_1 */
    case 391:  /* *anddi3_doubleword */
    case 390:  /* *anddi_1 */
    case 321:  /* *mulqi3_1 */
    case 319:  /* *muldi3_1 */
    case 318:  /* *mulsi3_1 */
    case 317:  /* *mulhi3_1 */
    case 264:  /* *subdi_1 */
    case 263:  /* *subsi_1 */
    case 262:  /* *subhi_1 */
    case 261:  /* *subqi_1 */
    case 260:  /* *subti3_doubleword */
    case 259:  /* *subdi3_doubleword */
    case 224:  /* *addqi_1 */
    case 223:  /* *addhi_1 */
    case 221:  /* *adddi_1 */
    case 220:  /* *addsi_1 */
    case 219:  /* *addti3_doubleword */
    case 218:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 215:  /* *floatunssixf2_i387_with_xmm */
    case 214:  /* *floatunssidf2_i387_with_xmm */
    case 213:  /* *floatunssisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 212:  /* floatdixf2_i387_with_xmm */
    case 211:  /* floatdidf2_i387_with_xmm */
    case 210:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 190:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 194:  /* fix_truncsi_i387_with_temp */
    case 193:  /* fix_trunchi_i387_with_temp */
    case 189:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 192:  /* fix_truncsi_i387 */
    case 191:  /* fix_trunchi_i387 */
    case 185:  /* fix_truncdi_i387_fisttp_with_temp */
    case 184:  /* fix_truncsi_i387_fisttp_with_temp */
    case 183:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 172:  /* *fixuns_truncdf_1 */
    case 171:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1301:  /* movdi_to_sse */
    case 715:  /* ffssi2_no_cmove */
    case 182:  /* fix_truncdi_i387_fisttp */
    case 181:  /* fix_truncsi_i387_fisttp */
    case 180:  /* fix_trunchi_i387_fisttp */
    case 166:  /* *truncxfdf2_mixed */
    case 165:  /* *truncxfsf2_mixed */
    case 163:  /* *truncdfsf_i387 */
    case 162:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 148:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 984:  /* *x86_movdicc_0_m1_neg */
    case 983:  /* *x86_movsicc_0_m1_neg */
    case 982:  /* *x86_movdicc_0_m1_se */
    case 981:  /* *x86_movsicc_0_m1_se */
    case 980:  /* *x86_movdicc_0_m1 */
    case 979:  /* *x86_movsicc_0_m1 */
    case 799:  /* *popcountdi2 */
    case 798:  /* *popcountsi2 */
    case 797:  /* *popcounthi2 */
    case 794:  /* *popcountdi2_falsedep_1 */
    case 793:  /* *popcountsi2_falsedep_1 */
    case 738:  /* *clzdi2_lzcnt */
    case 737:  /* *clzsi2_lzcnt */
    case 734:  /* *clzdi2_lzcnt_falsedep_1 */
    case 733:  /* *clzsi2_lzcnt_falsedep_1 */
    case 725:  /* *ctzdi2 */
    case 724:  /* *ctzsi2 */
    case 721:  /* *ctzdi2_falsedep_1 */
    case 720:  /* *ctzsi2_falsedep_1 */
    case 470:  /* *negdi2_1 */
    case 469:  /* *negsi2_1 */
    case 468:  /* *neghi2_1 */
    case 467:  /* *negqi2_1 */
    case 466:  /* *negti2_doubleword */
    case 465:  /* *negdi2_doubleword */
    case 188:  /* *fix_truncdi_i387_1 */
    case 187:  /* *fix_truncsi_i387_1 */
    case 186:  /* *fix_trunchi_i387_1 */
    case 140:  /* zero_extendqihi2_and */
    case 137:  /* zero_extendhisi2_and */
    case 136:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 671:  /* *indirect_jump */
    case 670:  /* *indirect_jump */
    case 121:  /* *pushxf_rounded */
    case 120:  /* *pushxf_rounded */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 118:  /* *insvqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4321:  /* avx512cd_maskw_vec_dupv4si */
    case 4320:  /* avx512cd_maskw_vec_dupv8si */
    case 4319:  /* avx512cd_maskw_vec_dupv16si */
    case 4318:  /* avx512cd_maskb_vec_dupv2di */
    case 4317:  /* avx512cd_maskb_vec_dupv4di */
    case 4316:  /* avx512cd_maskb_vec_dupv8di */
    case 4298:  /* *avx512dq_broadcastv8sf */
    case 4296:  /* *avx512dq_broadcastv16sf */
    case 4294:  /* *avx512dq_broadcastv4si */
    case 4292:  /* *avx512dq_broadcastv8si */
    case 4290:  /* *avx512dq_broadcastv16si */
    case 4221:  /* avx512vl_vec_dupv8hi */
    case 4219:  /* avx512vl_vec_dupv16hi */
    case 4217:  /* avx512bw_vec_dupv32hi */
    case 4215:  /* avx512vl_vec_dupv32qi */
    case 4213:  /* avx512vl_vec_dupv16qi */
    case 4211:  /* avx512bw_vec_dupv64qi */
    case 4209:  /* avx512vl_vec_dupv2df */
    case 4207:  /* avx512vl_vec_dupv4df */
    case 4205:  /* avx512f_vec_dupv8df */
    case 4203:  /* avx512vl_vec_dupv4sf */
    case 4201:  /* avx512vl_vec_dupv8sf */
    case 4199:  /* avx512f_vec_dupv16sf */
    case 4197:  /* avx512vl_vec_dupv2di */
    case 4195:  /* avx512vl_vec_dupv4di */
    case 4193:  /* avx512f_vec_dupv8di */
    case 4191:  /* avx512vl_vec_dupv4si */
    case 4189:  /* avx512vl_vec_dupv8si */
    case 4187:  /* avx512f_vec_dupv16si */
    case 4186:  /* avx512bw_vec_dupv64qi_1 */
    case 4185:  /* avx512bw_vec_dupv32hi_1 */
    case 4184:  /* avx512f_vec_dupv8di_1 */
    case 4183:  /* avx512f_vec_dupv16si_1 */
    case 4182:  /* avx2_vec_dupv4df */
    case 4144:  /* avx2_pbroadcastv4di_1 */
    case 4143:  /* avx2_pbroadcastv8si_1 */
    case 4142:  /* avx2_pbroadcastv16hi_1 */
    case 4141:  /* avx2_pbroadcastv32qi_1 */
    case 4140:  /* avx2_pbroadcastv2di */
    case 4139:  /* avx2_pbroadcastv4di */
    case 4138:  /* avx2_pbroadcastv4si */
    case 4137:  /* avx2_pbroadcastv8si */
    case 4136:  /* avx2_pbroadcastv8hi */
    case 4135:  /* avx2_pbroadcastv16hi */
    case 4134:  /* avx2_pbroadcastv32hi */
    case 4133:  /* avx2_pbroadcastv16qi */
    case 4132:  /* avx2_pbroadcastv32qi */
    case 4131:  /* avx2_pbroadcastv64qi */
    case 4130:  /* avx2_pbroadcastv8di */
    case 4129:  /* avx2_pbroadcastv16si */
    case 3943:  /* sse4_1_zero_extendv2siv2di2 */
    case 3941:  /* sse4_1_sign_extendv2siv2di2 */
    case 3931:  /* sse4_1_zero_extendv2hiv2di2 */
    case 3929:  /* sse4_1_sign_extendv2hiv2di2 */
    case 3927:  /* avx2_zero_extendv4hiv4di2 */
    case 3925:  /* avx2_sign_extendv4hiv4di2 */
    case 3919:  /* sse4_1_zero_extendv2qiv2di2 */
    case 3917:  /* sse4_1_sign_extendv2qiv2di2 */
    case 3915:  /* avx2_zero_extendv4qiv4di2 */
    case 3913:  /* avx2_sign_extendv4qiv4di2 */
    case 3911:  /* avx512f_zero_extendv8qiv8di2 */
    case 3909:  /* avx512f_sign_extendv8qiv8di2 */
    case 3907:  /* sse4_1_zero_extendv4hiv4si2 */
    case 3905:  /* sse4_1_sign_extendv4hiv4si2 */
    case 3895:  /* sse4_1_zero_extendv4qiv4si2 */
    case 3893:  /* sse4_1_sign_extendv4qiv4si2 */
    case 3891:  /* avx2_zero_extendv8qiv8si2 */
    case 3889:  /* avx2_sign_extendv8qiv8si2 */
    case 3883:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 3881:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 3703:  /* *vec_extractv4si_0_zext */
    case 2951:  /* *avx512f_us_truncatev8div16qi2 */
    case 2950:  /* *avx512f_truncatev8div16qi2 */
    case 2949:  /* *avx512f_ss_truncatev8div16qi2 */
    case 2488:  /* avx512f_vec_dupv8df_1 */
    case 2487:  /* avx512f_vec_dupv16sf_1 */
    case 2486:  /* avx2_vec_dupv8sf_1 */
    case 2485:  /* avx2_vec_dupv4sf */
    case 2484:  /* avx2_vec_dupv8sf */
    case 2446:  /* sse2_cvtps2pd */
    case 2421:  /* vec_unpacks_lo_v16sf */
    case 2420:  /* *avx_cvtps2pd256_2 */
    case 2400:  /* sse2_cvttpd2dq */
    case 2394:  /* ufix_truncv2sfv2di2 */
    case 2392:  /* fix_truncv2sfv2di2 */
    case 2342:  /* ufix_truncv2dfv2si2 */
    case 2313:  /* sse2_cvtdq2pd */
    case 2312:  /* avx_cvtdq2pd256_2 */
    case 2311:  /* avx512f_cvtdq2pd512_2 */
    case 2309:  /* ufloatv2siv2df2 */
    case 2300:  /* *ufloatv2div2sf2 */
    case 2299:  /* *floatv2div2sf2 */
    case 2257:  /* sse2_cvttsd2siq */
    case 2255:  /* sse2_cvttsd2si */
    case 2247:  /* avx512f_vcvttsd2usiq */
    case 2245:  /* avx512f_vcvttsd2usi */
    case 2239:  /* avx512f_vcvttss2usiq */
    case 2237:  /* avx512f_vcvttss2usi */
    case 2150:  /* sse_cvttss2siq */
    case 2148:  /* sse_cvttss2si */
    case 2137:  /* sse_cvttps2pi */
    case 1300:  /* sse2_movq128 */
    case 1211:  /* *vec_dupv4hi */
    case 868:  /* sqrt_extenddfxf2_i387 */
    case 867:  /* sqrt_extendsfxf2_i387 */
    case 509:  /* *one_cmplsi2_1_zext */
    case 498:  /* *negextenddfxf2 */
    case 497:  /* *absextenddfxf2 */
    case 496:  /* *negextendsfxf2 */
    case 495:  /* *absextendsfxf2 */
    case 494:  /* *negextendsfdf2 */
    case 493:  /* *absextendsfdf2 */
    case 154:  /* *extendqisi2_zext */
    case 152:  /* *extendhisi2_zext */
    case 114:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 681:  /* *sibcall_memory */
    case 680:  /* *sibcall_memory */
    case 107:  /* *movstricthi_xor */
    case 106:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 132:  /* *swapdf */
    case 131:  /* *swapsf */
    case 130:  /* swapxf */
    case 103:  /* *swaphi_2 */
    case 102:  /* *swapqi_2 */
    case 101:  /* *swaphi_1 */
    case 100:  /* *swapqi_1 */
    case 99:  /* *swapdi */
    case 98:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 4921:  /* clzv2di2 */
    case 4919:  /* clzv4di2 */
    case 4917:  /* clzv8di2 */
    case 4915:  /* clzv4si2 */
    case 4913:  /* clzv8si2 */
    case 4911:  /* clzv16si2 */
    case 4314:  /* *avx512dq_broadcastv4df_1 */
    case 4312:  /* *avx512dq_broadcastv4di_1 */
    case 4310:  /* *avx512dq_broadcastv8df_1 */
    case 4308:  /* *avx512dq_broadcastv8di_1 */
    case 4306:  /* *avx512dq_broadcastv16si_1 */
    case 4304:  /* *avx512dq_broadcastv16sf_1 */
    case 4302:  /* *avx512vl_broadcastv8sf_1 */
    case 4300:  /* *avx512vl_broadcastv8si_1 */
    case 4283:  /* vec_dupv4df */
    case 4282:  /* vec_dupv4di */
    case 4281:  /* vec_dupv8sf */
    case 4280:  /* vec_dupv8si */
    case 4279:  /* *vec_dupv4si */
    case 4278:  /* *vec_dupv8si */
    case 4277:  /* *vec_dupv8hi */
    case 4276:  /* *vec_dupv16hi */
    case 4275:  /* *vec_dupv16qi */
    case 4274:  /* *vec_dupv32qi */
    case 4269:  /* *vec_dupv2di */
    case 4268:  /* *vec_dupv4si */
    case 4267:  /* vec_dupv4sf */
    case 4265:  /* *avx512vl_vec_dup_gprv2df */
    case 4263:  /* *avx512vl_vec_dup_gprv4df */
    case 4261:  /* *avx512f_vec_dup_gprv8df */
    case 4259:  /* *avx512vl_vec_dup_gprv4sf */
    case 4257:  /* *avx512vl_vec_dup_gprv8sf */
    case 4255:  /* *avx512f_vec_dup_gprv16sf */
    case 4253:  /* *avx512vl_vec_dup_gprv2di */
    case 4251:  /* *avx512vl_vec_dup_gprv4di */
    case 4249:  /* *avx512f_vec_dup_gprv8di */
    case 4247:  /* *avx512vl_vec_dup_gprv4si */
    case 4245:  /* *avx512vl_vec_dup_gprv8si */
    case 4243:  /* *avx512f_vec_dup_gprv16si */
    case 4241:  /* *avx512vl_vec_dup_gprv8hi */
    case 4239:  /* *avx512vl_vec_dup_gprv16hi */
    case 4237:  /* *avx512bw_vec_dup_gprv32hi */
    case 4235:  /* *avx512vl_vec_dup_gprv32qi */
    case 4233:  /* *avx512vl_vec_dup_gprv16qi */
    case 4231:  /* *avx512bw_vec_dup_gprv64qi */
    case 4229:  /* *avx512f_broadcastv8di */
    case 4227:  /* *avx512f_broadcastv8df */
    case 4225:  /* *avx512f_broadcastv16si */
    case 4223:  /* *avx512f_broadcastv16sf */
    case 3939:  /* avx2_zero_extendv4siv4di2 */
    case 3937:  /* avx2_sign_extendv4siv4di2 */
    case 3935:  /* avx512f_zero_extendv8siv8di2 */
    case 3933:  /* avx512f_sign_extendv8siv8di2 */
    case 3923:  /* avx512f_zero_extendv8hiv8di2 */
    case 3921:  /* avx512f_sign_extendv8hiv8di2 */
    case 3903:  /* avx2_zero_extendv8hiv8si2 */
    case 3901:  /* avx2_sign_extendv8hiv8si2 */
    case 3899:  /* avx512f_zero_extendv16hiv16si2 */
    case 3897:  /* avx512f_sign_extendv16hiv16si2 */
    case 3887:  /* *avx512f_zero_extendv16qiv16si2 */
    case 3885:  /* *avx512f_sign_extendv16qiv16si2 */
    case 3879:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 3877:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 3875:  /* avx2_zero_extendv16qiv16hi2 */
    case 3873:  /* avx2_sign_extendv16qiv16hi2 */
    case 3834:  /* absv2si2 */
    case 3833:  /* absv4hi2 */
    case 3832:  /* absv8qi2 */
    case 3819:  /* *absv2di2 */
    case 3818:  /* *absv4di2 */
    case 3817:  /* *absv8di2 */
    case 3816:  /* *absv4si2 */
    case 3815:  /* *absv8si2 */
    case 3814:  /* *absv16si2 */
    case 3813:  /* *absv8hi2 */
    case 3812:  /* *absv16hi2 */
    case 3811:  /* *absv32hi2 */
    case 3810:  /* *absv16qi2 */
    case 3809:  /* *absv32qi2 */
    case 3808:  /* *absv64qi2 */
    case 3709:  /* *vec_extractv2di_1 */
    case 3704:  /* *vec_extractv2di_0_sse */
    case 3702:  /* *vec_extractv2di_0 */
    case 3701:  /* *vec_extractv4si_0 */
    case 2804:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 2803:  /* *avx512vl_truncatev16hiv16qi2 */
    case 2802:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 2801:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 2800:  /* *avx512vl_truncatev8siv8hi2 */
    case 2799:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 2798:  /* *avx512vl_us_truncatev4div4si2 */
    case 2797:  /* *avx512vl_truncatev4div4si2 */
    case 2796:  /* *avx512vl_ss_truncatev4div4si2 */
    case 2792:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 2791:  /* avx512bw_truncatev32hiv32qi2 */
    case 2790:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 2777:  /* *avx512f_us_truncatev8div8hi2 */
    case 2776:  /* *avx512f_truncatev8div8hi2 */
    case 2775:  /* *avx512f_ss_truncatev8div8hi2 */
    case 2774:  /* *avx512f_us_truncatev8div8si2 */
    case 2773:  /* *avx512f_truncatev8div8si2 */
    case 2772:  /* *avx512f_ss_truncatev8div8si2 */
    case 2771:  /* *avx512f_us_truncatev16siv16hi2 */
    case 2770:  /* *avx512f_truncatev16siv16hi2 */
    case 2769:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 2768:  /* *avx512f_us_truncatev16siv16qi2 */
    case 2767:  /* *avx512f_truncatev16siv16qi2 */
    case 2766:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 2763:  /* vec_dupv2df */
    case 2759:  /* *vec_extractv2df_0_sse */
    case 2758:  /* sse2_storelpd */
    case 2757:  /* *vec_extractv2df_1_sse */
    case 2756:  /* sse2_storehpd */
    case 2560:  /* vec_extract_hi_v32qi */
    case 2559:  /* vec_extract_lo_v32qi */
    case 2558:  /* vec_extract_hi_v64qi */
    case 2557:  /* vec_extract_lo_v64qi */
    case 2556:  /* vec_extract_hi_v16hi */
    case 2555:  /* vec_extract_lo_v16hi */
    case 2554:  /* vec_extract_hi_v32hi */
    case 2553:  /* vec_extract_lo_v32hi */
    case 2552:  /* vec_extract_hi_v8sf */
    case 2551:  /* vec_extract_hi_v8si */
    case 2543:  /* vec_extract_lo_v8sf */
    case 2541:  /* vec_extract_lo_v8si */
    case 2539:  /* vec_extract_hi_v4df */
    case 2537:  /* vec_extract_hi_v4di */
    case 2535:  /* vec_extract_lo_v4df */
    case 2533:  /* vec_extract_lo_v4di */
    case 2531:  /* vec_extract_lo_v16si */
    case 2529:  /* vec_extract_lo_v16sf */
    case 2527:  /* vec_extract_hi_v16si */
    case 2525:  /* vec_extract_hi_v16sf */
    case 2521:  /* vec_extract_hi_v8di */
    case 2519:  /* vec_extract_hi_v8df */
    case 2515:  /* vec_extract_lo_v8di */
    case 2513:  /* vec_extract_lo_v8df */
    case 2496:  /* *vec_extractv4sf_0 */
    case 2481:  /* sse_storelps */
    case 2479:  /* sse_storehps */
    case 2418:  /* avx_cvtps2pd256 */
    case 2414:  /* avx512f_cvtps2pd512 */
    case 2410:  /* avx_cvtpd2ps256 */
    case 2406:  /* *avx512f_cvtpd2ps512 */
    case 2398:  /* ufix_truncv4sfv4si2 */
    case 2396:  /* ufix_truncv8sfv8si2 */
    case 2390:  /* ufix_truncv4sfv4di2 */
    case 2388:  /* fix_truncv4sfv4di2 */
    case 2384:  /* ufix_truncv8sfv8di2 */
    case 2380:  /* fix_truncv8sfv8di2 */
    case 2362:  /* ufix_truncv2dfv2di2 */
    case 2360:  /* fix_truncv2dfv2di2 */
    case 2358:  /* ufix_truncv4dfv4di2 */
    case 2356:  /* fix_truncv4dfv4di2 */
    case 2352:  /* ufix_truncv8dfv8di2 */
    case 2348:  /* fix_truncv8dfv8di2 */
    case 2346:  /* ufix_truncv4dfv4si2 */
    case 2344:  /* fix_truncv4dfv4si2 */
    case 2338:  /* ufix_truncv8dfv8si2 */
    case 2334:  /* fix_truncv8dfv8si2 */
    case 2307:  /* ufloatv4siv4df2 */
    case 2305:  /* ufloatv8siv8df2 */
    case 2297:  /* ufloatv4div4sf2 */
    case 2295:  /* floatv4div4sf2 */
    case 2291:  /* ufloatv8div8sf2 */
    case 2287:  /* floatv8div8sf2 */
    case 2283:  /* ufloatv2div2df2 */
    case 2279:  /* floatv2div2df2 */
    case 2275:  /* ufloatv4div4df2 */
    case 2271:  /* floatv4div4df2 */
    case 2267:  /* ufloatv8div8df2 */
    case 2263:  /* floatv8div8df2 */
    case 2261:  /* floatv4siv4df2 */
    case 2259:  /* floatv8siv8df2 */
    case 2229:  /* sse2_cvttpd2pi */
    case 2227:  /* sse2_cvtpi2pd */
    case 2225:  /* fix_truncv4sfv4si2 */
    case 2223:  /* fix_truncv8sfv8si2 */
    case 2219:  /* ufix_truncv16sfv16si2 */
    case 2215:  /* fix_truncv16sfv16si2 */
    case 2175:  /* ufloatv4siv4sf2 */
    case 2171:  /* ufloatv8siv8sf2 */
    case 2167:  /* ufloatv16siv16sf2 */
    case 2165:  /* floatv4siv4sf2 */
    case 2163:  /* floatv8siv8sf2 */
    case 2159:  /* floatv16siv16sf2 */
    case 1528:  /* sse2_sqrtv2df2 */
    case 1526:  /* avx_sqrtv4df2 */
    case 1522:  /* avx512f_sqrtv8df2 */
    case 1520:  /* sse_sqrtv4sf2 */
    case 1518:  /* avx_sqrtv8sf2 */
    case 1514:  /* avx512f_sqrtv16sf2 */
    case 1215:  /* *vec_extractv2si_1 */
    case 1214:  /* *vec_extractv2si_0 */
    case 1212:  /* *vec_dupv2si */
    case 1210:  /* mmx_pswapdv2si2 */
    case 1145:  /* *vec_extractv2sf_1 */
    case 1144:  /* *vec_extractv2sf_0 */
    case 1142:  /* *vec_dupv2sf */
    case 1141:  /* mmx_pswapdv2sf2 */
    case 1140:  /* mmx_floatv2si2 */
    case 1137:  /* mmx_pf2id */
    case 871:  /* *sqrtdf2_sse */
    case 870:  /* *sqrtsf2_sse */
    case 866:  /* sqrtxf2 */
    case 803:  /* *bswapdi2 */
    case 802:  /* *bswapsi2 */
    case 801:  /* *bswapdi2_movbe */
    case 800:  /* *bswapsi2_movbe */
    case 508:  /* *one_cmplqi2_1 */
    case 507:  /* *one_cmplhi2_1 */
    case 506:  /* *one_cmpldi2_1 */
    case 505:  /* *one_cmplsi2_1 */
    case 492:  /* *negxf2_1 */
    case 491:  /* *absxf2_1 */
    case 490:  /* *negdf2_1 */
    case 489:  /* *absdf2_1 */
    case 488:  /* *negsf2_1 */
    case 487:  /* *abssf2_1 */
    case 209:  /* *floatdidf2_i387 */
    case 208:  /* *floatdisf2_i387 */
    case 207:  /* *floatsidf2_i387 */
    case 206:  /* *floatsisf2_i387 */
    case 205:  /* *floatdidf2_mixed */
    case 204:  /* *floatsidf2_mixed */
    case 203:  /* *floatdisf2_mixed */
    case 202:  /* *floatsisf2_mixed */
    case 201:  /* floatdixf2 */
    case 200:  /* floatsixf2 */
    case 199:  /* floathixf2 */
    case 198:  /* floathidf2 */
    case 197:  /* floathisf2 */
    case 179:  /* fix_truncdi_fisttp_i387_1 */
    case 178:  /* fix_truncsi_fisttp_i387_1 */
    case 177:  /* fix_trunchi_fisttp_i387_1 */
    case 176:  /* fix_truncdfdi_sse */
    case 175:  /* fix_truncdfsi_sse */
    case 174:  /* fix_truncsfdi_sse */
    case 173:  /* fix_truncsfsi_sse */
    case 170:  /* *truncxfdf2_i387 */
    case 169:  /* *truncxfsf2_i387 */
    case 168:  /* truncxfdf2_i387_noop */
    case 167:  /* truncxfsf2_i387_noop */
    case 164:  /* *truncdfsf2_i387_1 */
    case 161:  /* *truncdfsf_fast_i387 */
    case 160:  /* *truncdfsf_fast_mixed */
    case 159:  /* *extenddfxf2_i387 */
    case 158:  /* *extendsfxf2_i387 */
    case 157:  /* *extendsfdf2_i387 */
    case 156:  /* *extendsfdf2_mixed */
    case 155:  /* extendqihi2 */
    case 153:  /* extendqisi2 */
    case 151:  /* extendhisi2 */
    case 150:  /* extendhidi2 */
    case 149:  /* extendqidi2 */
    case 147:  /* *extendsidi2_rex64 */
    case 146:  /* *zextsi_doubleword */
    case 145:  /* *zexthi_doubleword */
    case 144:  /* *zextqi_doubleword */
    case 143:  /* *zexthi_doubleword_and */
    case 142:  /* *zextqi_doubleword_and */
    case 141:  /* *zero_extendqihi2 */
    case 139:  /* *zero_extendhisi2 */
    case 138:  /* *zero_extendqisi2 */
    case 135:  /* zero_extendhidi2 */
    case 134:  /* zero_extendqidi2 */
    case 133:  /* *zero_extendsidi2 */
    case 113:  /* *extzvdi */
    case 112:  /* *extzvsi */
    case 111:  /* *extzvhi */
    case 110:  /* *extvqi */
    case 109:  /* *extvsi */
    case 108:  /* *extvhi */
    case 97:  /* *movabsdi_2 */
    case 96:  /* *movabssi_2 */
    case 95:  /* *movabshi_2 */
    case 94:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 679:  /* *sibcall */
    case 678:  /* *sibcall */
    case 675:  /* *call */
    case 674:  /* *call */
    case 634:  /* *setcc_qi_slp */
    case 117:  /* insvdi_1 */
    case 116:  /* insvsi_1 */
    case 115:  /* insvhi_1 */
    case 105:  /* *movstricthi_1 */
    case 104:  /* *movstrictqi_1 */
    case 93:  /* *movabsdi_1 */
    case 92:  /* *movabssi_1 */
    case 91:  /* *movabshi_1 */
    case 90:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 4983:  /* storedi_via_fpu */
    case 4982:  /* loaddi_via_fpu */
    case 4947:  /* avx512f_pd512_256pd */
    case 4946:  /* avx512f_ps512_256ps */
    case 4945:  /* avx512f_si512_256si */
    case 4944:  /* avx512f_pd512_pd */
    case 4943:  /* avx512f_ps512_ps */
    case 4942:  /* avx512f_si512_si */
    case 4933:  /* *conflictv2di */
    case 4931:  /* *conflictv4di */
    case 4929:  /* *conflictv8di */
    case 4927:  /* *conflictv4si */
    case 4925:  /* *conflictv8si */
    case 4923:  /* *conflictv16si */
    case 4580:  /* *avx512f_vcvtph2ps512 */
    case 4578:  /* vcvtph2ps256 */
    case 4576:  /* *vcvtph2ps_load */
    case 4507:  /* avx_pd256_pd */
    case 4506:  /* avx_ps256_ps */
    case 4505:  /* avx_si256_si */
    case 4124:  /* aesimc */
    case 4097:  /* xop_frczv4df2 */
    case 4096:  /* xop_frczv8sf2 */
    case 4095:  /* xop_frczv2df2 */
    case 4094:  /* xop_frczv4sf2 */
    case 4093:  /* xop_frczdf2 */
    case 4092:  /* xop_frczsf2 */
    case 4017:  /* *avx512er_rsqrt28v8df */
    case 4013:  /* *avx512er_rsqrt28v16sf */
    case 4005:  /* *avx512er_rcp28v8df */
    case 4001:  /* *avx512er_rcp28v16sf */
    case 3997:  /* avx512er_exp2v8df */
    case 3993:  /* avx512er_exp2v16sf */
    case 3872:  /* sse4_1_phminposuw */
    case 3857:  /* sse4_1_movntdqa */
    case 3856:  /* avx2_movntdqa */
    case 3855:  /* avx512f_movntdqa */
    case 3836:  /* sse4a_movntdf */
    case 3835:  /* sse4a_movntsf */
    case 3738:  /* sse2_pmovmskb */
    case 3737:  /* avx2_pmovmskb */
    case 3732:  /* sse2_movmskpd */
    case 3731:  /* avx_movmskpd256 */
    case 3730:  /* sse_movmskps */
    case 3729:  /* avx_movmskps256 */
    case 2639:  /* avx512vl_getexpv2df */
    case 2635:  /* avx512vl_getexpv4df */
    case 2631:  /* avx512f_getexpv8df */
    case 2627:  /* avx512vl_getexpv4sf */
    case 2623:  /* avx512vl_getexpv8sf */
    case 2619:  /* avx512f_getexpv16sf */
    case 2433:  /* avx512vl_cvtq2maskv2di */
    case 2432:  /* avx512vl_cvtq2maskv4di */
    case 2431:  /* avx512f_cvtq2maskv8di */
    case 2430:  /* avx512vl_cvtd2maskv4si */
    case 2429:  /* avx512vl_cvtd2maskv8si */
    case 2428:  /* avx512f_cvtd2maskv16si */
    case 2427:  /* avx512vl_cvtw2maskv8hi */
    case 2426:  /* avx512vl_cvtw2maskv16hi */
    case 2425:  /* avx512bw_cvtw2maskv32hi */
    case 2424:  /* avx512vl_cvtb2maskv32qi */
    case 2423:  /* avx512vl_cvtb2maskv16qi */
    case 2422:  /* avx512bw_cvtb2maskv64qi */
    case 2378:  /* ufix_notruncv2dfv2di2 */
    case 2376:  /* ufix_notruncv4dfv4di2 */
    case 2372:  /* ufix_notruncv8dfv8di2 */
    case 2370:  /* fix_notruncv2dfv2di2 */
    case 2368:  /* fix_notruncv4dfv4di2 */
    case 2364:  /* fix_notruncv8dfv8di2 */
    case 2328:  /* ufix_notruncv4dfv4si2 */
    case 2324:  /* ufix_notruncv8dfv8si2 */
    case 2319:  /* avx_cvtpd2dq256 */
    case 2315:  /* avx512f_cvtpd2dq512 */
    case 2254:  /* sse2_cvtsd2siq_2 */
    case 2251:  /* sse2_cvtsd2si_2 */
    case 2228:  /* sse2_cvtpd2pi */
    case 2211:  /* *avx512dq_cvtps2uqqv4di */
    case 2207:  /* *avx512dq_cvtps2uqqv8di */
    case 2203:  /* *avx512dq_cvtps2qqv4di */
    case 2199:  /* *avx512dq_cvtps2qqv8di */
    case 2195:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 2191:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 2187:  /* *avx512f_ufix_notruncv16sfv16si */
    case 2183:  /* avx512f_fix_notruncv16sfv16si */
    case 2181:  /* sse2_fix_notruncv4sfv4si */
    case 2179:  /* avx_fix_notruncv8sfv8si */
    case 2147:  /* sse_cvtss2siq_2 */
    case 2144:  /* sse_cvtss2si_2 */
    case 1546:  /* *rsqrt14v2df */
    case 1544:  /* *rsqrt14v4df */
    case 1542:  /* *rsqrt14v8df */
    case 1540:  /* *rsqrt14v4sf */
    case 1538:  /* *rsqrt14v8sf */
    case 1536:  /* *rsqrt14v16sf */
    case 1535:  /* sse_rsqrtv4sf2 */
    case 1534:  /* avx_rsqrtv8sf2 */
    case 1510:  /* *rcp14v2df */
    case 1508:  /* *rcp14v4df */
    case 1506:  /* *rcp14v8df */
    case 1504:  /* *rcp14v4sf */
    case 1502:  /* *rcp14v8sf */
    case 1500:  /* *rcp14v16sf */
    case 1498:  /* sse_rcpv4sf2 */
    case 1497:  /* avx_rcpv8sf2 */
    case 1386:  /* sse2_movntv2di */
    case 1385:  /* avx_movntv4di */
    case 1384:  /* avx512f_movntv8di */
    case 1383:  /* sse2_movntv2df */
    case 1382:  /* avx_movntv4df */
    case 1381:  /* avx512f_movntv8df */
    case 1380:  /* sse_movntv4sf */
    case 1379:  /* avx_movntv8sf */
    case 1378:  /* avx512f_movntv16sf */
    case 1377:  /* sse2_movntidi */
    case 1376:  /* sse2_movntisi */
    case 1375:  /* sse3_lddqu */
    case 1374:  /* avx_lddqu256 */
    case 1361:  /* avx512vl_storedquv2di */
    case 1360:  /* avx512vl_storedquv4di */
    case 1359:  /* avx512f_storedquv8di */
    case 1358:  /* sse2_storedquv4si */
    case 1357:  /* avx_storedquv8si */
    case 1356:  /* avx512f_storedquv16si */
    case 1355:  /* avx512vl_storedquv16hi */
    case 1354:  /* avx512vl_storedquv8hi */
    case 1353:  /* avx512bw_storedquv32hi */
    case 1352:  /* avx512f_storedquv64qi */
    case 1351:  /* sse2_storedquv16qi */
    case 1350:  /* avx_storedquv32qi */
    case 1348:  /* *avx512vl_loaddquv2di */
    case 1346:  /* *avx512vl_loaddquv4di */
    case 1344:  /* *avx512f_loaddquv8di */
    case 1342:  /* *sse2_loaddquv4si */
    case 1340:  /* *avx_loaddquv8si */
    case 1338:  /* *avx512f_loaddquv16si */
    case 1336:  /* *avx512vl_loaddquv16hi */
    case 1334:  /* *avx512vl_loaddquv8hi */
    case 1332:  /* *avx512bw_loaddquv32hi */
    case 1330:  /* *avx512f_loaddquv64qi */
    case 1328:  /* *sse2_loaddquv16qi */
    case 1326:  /* *avx_loaddquv32qi */
    case 1319:  /* sse2_storeupd */
    case 1318:  /* avx_storeupd256 */
    case 1317:  /* avx512f_storeupd512 */
    case 1316:  /* sse_storeups */
    case 1315:  /* avx_storeups256 */
    case 1314:  /* avx512f_storeups512 */
    case 1312:  /* *sse2_loadupd */
    case 1310:  /* *avx_loadupd256 */
    case 1308:  /* *avx512f_loadupd512 */
    case 1306:  /* *sse_loadups */
    case 1304:  /* *avx_loadups256 */
    case 1302:  /* *avx512f_loadups512 */
    case 1220:  /* mmx_pmovmskb */
    case 1129:  /* mmx_rsqrtv2sf2 */
    case 1126:  /* mmx_rcpv2sf2 */
    case 1118:  /* sse_movntq */
    case 1110:  /* move_size_reloc_di */
    case 1109:  /* move_size_reloc_si */
    case 1042:  /* xsaves */
    case 1041:  /* xsavec */
    case 1040:  /* xsaveopt */
    case 1039:  /* xsave */
    case 1029:  /* rdpmc */
    case 943:  /* movmsk_df */
    case 942:  /* fxamdf2_i387_with_temp */
    case 941:  /* fxamsf2_i387_with_temp */
    case 940:  /* fxamxf2_i387 */
    case 939:  /* fxamdf2_i387 */
    case 938:  /* fxamsf2_i387 */
    case 909:  /* fistsi2 */
    case 908:  /* fisthi2 */
    case 907:  /* *fistsi2_1 */
    case 906:  /* *fisthi2_1 */
    case 903:  /* *fistdi2_1 */
    case 902:  /* rintxf2 */
    case 898:  /* *f2xm1xf2_i387 */
    case 875:  /* *cosxf2_i387 */
    case 874:  /* *sinxf2_i387 */
    case 869:  /* *rsqrtsf2_sse */
    case 865:  /* truncxfdf2_i387_noop_unspec */
    case 864:  /* truncxfsf2_i387_noop_unspec */
    case 836:  /* *rcpsf2_sse */
    case 829:  /* *tls_dynamic_gnu2_lea_64 */
    case 87:  /* kmovw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 631:  /* *setcc_si_1_and */
    case 81:  /* *movdi_or */
    case 80:  /* *movsi_or */
    case 79:  /* *movdi_xor */
    case 78:  /* *movsi_xor */
    case 73:  /* *popdi1_epilogue */
    case 72:  /* *popsi1_epilogue */
    case 69:  /* *pushdi2_prologue */
    case 68:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1245:  /* *movv2df_internal */
    case 1244:  /* *movv4df_internal */
    case 1243:  /* *movv8df_internal */
    case 1242:  /* *movv4sf_internal */
    case 1241:  /* *movv8sf_internal */
    case 1240:  /* *movv16sf_internal */
    case 1239:  /* *movv1ti_internal */
    case 1238:  /* *movv2ti_internal */
    case 1237:  /* *movv4ti_internal */
    case 1236:  /* *movv2di_internal */
    case 1235:  /* *movv4di_internal */
    case 1234:  /* *movv8di_internal */
    case 1233:  /* *movv4si_internal */
    case 1232:  /* *movv8si_internal */
    case 1231:  /* *movv16si_internal */
    case 1230:  /* *movv8hi_internal */
    case 1229:  /* *movv16hi_internal */
    case 1228:  /* *movv32hi_internal */
    case 1227:  /* *movv16qi_internal */
    case 1226:  /* *movv32qi_internal */
    case 1225:  /* *movv64qi_internal */
    case 1117:  /* *movv2sf_internal */
    case 1116:  /* *movv1di_internal */
    case 1115:  /* *movv2si_internal */
    case 1114:  /* *movv4hi_internal */
    case 1113:  /* *movv8qi_internal */
    case 1098:  /* *movbnd64_internal_mpx */
    case 1097:  /* *movbnd32_internal_mpx */
    case 1015:  /* *prefetch_3dnow */
    case 633:  /* *setcc_qi */
    case 632:  /* *setcc_si_1_movzbl */
    case 630:  /* *setcc_di_1 */
    case 217:  /* *leadi */
    case 216:  /* *leasi */
    case 129:  /* *movsf_internal */
    case 128:  /* *movdf_internal */
    case 127:  /* *movxf_internal */
    case 126:  /* *movtf_internal */
    case 125:  /* *pushsf */
    case 124:  /* *pushsf_rex64 */
    case 123:  /* *pushdf */
    case 122:  /* *pushxf */
    case 119:  /* *pushtf */
    case 89:  /* *movqi_internal */
    case 88:  /* *movhi_internal */
    case 86:  /* *movsi_internal */
    case 85:  /* *movdi_internal */
    case 84:  /* *movti_internal */
    case 83:  /* *movoi_internal_avx */
    case 82:  /* *movxi_internal_avx512f */
    case 77:  /* *popfldi1 */
    case 76:  /* *popflsi1 */
    case 75:  /* *pushfldi2 */
    case 74:  /* *pushflsi2 */
    case 71:  /* *popdi1 */
    case 70:  /* *popsi1 */
    case 67:  /* *pushhi2 */
    case 66:  /* *pushqi2 */
    case 65:  /* *pushsi2_rex64 */
    case 64:  /* *pushhi2_rex64 */
    case 63:  /* *pushqi2_rex64 */
    case 62:  /* *pushsi2 */
    case 61:  /* *pushdi2_rex64 */
    case 60:  /* *pushti2 */
    case 59:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 196:  /* x86_fldcw_1 */
    case 48:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 3744:  /* sse_stmxcsr */
    case 1072:  /* rdgsbasedi */
    case 1071:  /* rdfsbasedi */
    case 1070:  /* rdgsbasesi */
    case 1069:  /* rdfsbasesi */
    case 1064:  /* lwp_slwpcbdi */
    case 1063:  /* lwp_slwpcbsi */
    case 1059:  /* fnstsw */
    case 1036:  /* fxsave64 */
    case 1035:  /* fxsave */
    case 1031:  /* rdtsc */
    case 1016:  /* *prefetch_prefetchwt1 */
    case 821:  /* *load_tp_di */
    case 820:  /* *load_tp_si */
    case 819:  /* *load_tp_x32_zext */
    case 818:  /* *load_tp_x32 */
    case 708:  /* set_got_rex64 */
    case 195:  /* x86_fnstcw_1 */
    case 47:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 46:  /* *cmpxf_si_cc_i387 */
    case 45:  /* *cmpdf_si_cc_i387 */
    case 44:  /* *cmpsf_si_cc_i387 */
    case 43:  /* *cmpxf_hi_cc_i387 */
    case 42:  /* *cmpdf_hi_cc_i387 */
    case 41:  /* *cmpsf_hi_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 40:  /* *cmpxf_si_i387 */
    case 39:  /* *cmpdf_si_i387 */
    case 38:  /* *cmpsf_si_i387 */
    case 37:  /* *cmpxf_hi_i387 */
    case 36:  /* *cmpdf_hi_i387 */
    case 35:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 239:  /* *addsi_4 */
    case 238:  /* *addhi_4 */
    case 237:  /* *addqi_4 */
    case 236:  /* *adddi_4 */
    case 34:  /* *cmpuxf_cc_i387 */
    case 33:  /* *cmpudf_cc_i387 */
    case 32:  /* *cmpusf_cc_i387 */
    case 28:  /* *cmpdf_cc_i387 */
    case 27:  /* *cmpsf_cc_i387 */
    case 24:  /* *cmpxf_cc_i387 */
    case 22:  /* *cmpxf_0_cc_i387 */
    case 21:  /* *cmpdf_0_cc_i387 */
    case 20:  /* *cmpsf_0_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 31:  /* *cmpuxf_i387 */
    case 30:  /* *cmpudf_i387 */
    case 29:  /* *cmpusf_i387 */
    case 26:  /* *cmpdf_i387 */
    case 25:  /* *cmpsf_i387 */
    case 23:  /* *cmpxf_i387 */
    case 19:  /* *cmpxf_0_i387 */
    case 18:  /* *cmpdf_0_i387 */
    case 17:  /* *cmpsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 16:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 15:  /* *cmpqi_ext_3 */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 440:  /* kortestchi */
    case 439:  /* kortestzhi */
    case 371:  /* *testsi_1 */
    case 370:  /* *testhi_1 */
    case 369:  /* *testqi_1 */
    case 368:  /* *testqi_1_maybe_si */
    case 367:  /* *testdi_1 */
    case 12:  /* *cmpdi_minus_1 */
    case 11:  /* *cmpsi_minus_1 */
    case 10:  /* *cmphi_minus_1 */
    case 9:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 58:  /* *cmpiuxf_i387 */
    case 57:  /* *cmpiudf_i387 */
    case 56:  /* *cmpiusf_i387 */
    case 55:  /* *cmpixf_i387 */
    case 54:  /* *cmpidf_i387 */
    case 53:  /* *cmpisf_i387 */
    case 52:  /* *cmpiudf_mixed */
    case 51:  /* *cmpiusf_mixed */
    case 50:  /* *cmpidf_mixed */
    case 49:  /* *cmpisf_mixed */
    case 8:  /* *cmpdi_1 */
    case 7:  /* *cmpsi_1 */
    case 6:  /* *cmphi_1 */
    case 5:  /* *cmpqi_1 */
    case 4:  /* *cmpdi_ccno_1 */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* *cmphi_ccno_1 */
    case 1:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}