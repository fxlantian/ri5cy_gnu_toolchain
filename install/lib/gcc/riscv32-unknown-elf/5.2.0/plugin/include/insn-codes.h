/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,

  CODE_FOR_addsf3 = 1,
  CODE_FOR_adddf3 = 2,
  CODE_FOR_subsf3 = 12,
  CODE_FOR_subdf3 = 13,
  CODE_FOR_mulsf3 = 24,
  CODE_FOR_muldf3 = 25,
  CODE_FOR_mulditi3 = 33,
  CODE_FOR_umulditi3 = 34,
  CODE_FOR_muldi3_highpart = 35,
  CODE_FOR_umuldi3_highpart = 36,
  CODE_FOR_usmulditi3 = 37,
  CODE_FOR_usmuldi3_highpart = 38,
  CODE_FOR_mulsi3_highpart = 39,
  CODE_FOR_umulsi3_highpart = 40,
  CODE_FOR_usmulsi3_highpart = 41,
  CODE_FOR_divsi3 = 42,
  CODE_FOR_udivsi3 = 43,
  CODE_FOR_divdi3 = 44,
  CODE_FOR_udivdi3 = 45,
  CODE_FOR_modsi3 = 46,
  CODE_FOR_umodsi3 = 47,
  CODE_FOR_moddi3 = 48,
  CODE_FOR_umoddi3 = 49,
  CODE_FOR_divsf3 = 50,
  CODE_FOR_divdf3 = 51,
  CODE_FOR_sqrtsf2 = 52,
  CODE_FOR_sqrtdf2 = 53,
  CODE_FOR_fmasf4 = 54,
  CODE_FOR_fmadf4 = 55,
  CODE_FOR_fmssf4 = 56,
  CODE_FOR_fmsdf4 = 57,
  CODE_FOR_nfmasf4 = 58,
  CODE_FOR_nfmadf4 = 59,
  CODE_FOR_nfmssf4 = 60,
  CODE_FOR_nfmsdf4 = 61,
  CODE_FOR_abssf2 = 66,
  CODE_FOR_absdf2 = 67,
  CODE_FOR_abssi2 = 68,
  CODE_FOR_sminsf3 = 69,
  CODE_FOR_smindf3 = 70,
  CODE_FOR_smaxsf3 = 71,
  CODE_FOR_smaxdf3 = 72,
  CODE_FOR_sminsi3 = 73,
  CODE_FOR_smaxsi3 = 74,
  CODE_FOR_uminsi3 = 75,
  CODE_FOR_umaxsi3 = 76,
  CODE_FOR_avgsi3 = 77,
  CODE_FOR_avgusi3 = 78,
  CODE_FOR_popcountsi2 = 79,
  CODE_FOR_fl1si2 = 80,
  CODE_FOR_ffsi2 = 81,
  CODE_FOR_rotrsi3 = 82,
  CODE_FOR_mulqisi3 = 83,
  CODE_FOR_umulqisi3 = 84,
  CODE_FOR_mulhisi3 = 85,
  CODE_FOR_umulhisi3 = 86,
  CODE_FOR_smulhi3_highpart = 87,
  CODE_FOR_umulhi3_highpart = 88,
  CODE_FOR_mulhhs_si3 = 89,
  CODE_FOR_mulhhu_si3 = 90,
  CODE_FOR_mulsNr_si3 = 91,
  CODE_FOR_mulsRNr_si3 = 92,
  CODE_FOR_muluNr_si3 = 93,
  CODE_FOR_muluRNr_si3 = 94,
  CODE_FOR_mulhhsNr_si3 = 95,
  CODE_FOR_mulhhuNr_si3 = 96,
  CODE_FOR_mulhhsRNr_si3 = 97,
  CODE_FOR_mulhhuRNr_si3 = 98,
  CODE_FOR_macs_si4 = 99,
  CODE_FOR_macu_si4 = 100,
  CODE_FOR_machlsu_si4 = 101,
  CODE_FOR_machlu_si4 = 102,
  CODE_FOR_machhs_si4 = 103,
  CODE_FOR_machhu_si4 = 104,
  CODE_FOR_machls_si4 = 105,
  CODE_FOR_macsNr_si3 = 106,
  CODE_FOR_macuNr_si3 = 107,
  CODE_FOR_macsRNr_si3 = 108,
  CODE_FOR_macuRNr_si3 = 109,
  CODE_FOR_machhsNr_si3 = 110,
  CODE_FOR_machhuNr_si3 = 111,
  CODE_FOR_machhsRNr_si3 = 112,
  CODE_FOR_machhuRNr_si3 = 113,
  CODE_FOR_maddsisi4 = 114,
  CODE_FOR_msubsisi4 = 115,
  CODE_FOR_addN_si3 = 116,
  CODE_FOR_addNu_si3 = 117,
  CODE_FOR_subN_si3 = 118,
  CODE_FOR_subNu_si3 = 119,
  CODE_FOR_addRN_si3 = 120,
  CODE_FOR_addRNu_si3 = 121,
  CODE_FOR_subRN_si3 = 122,
  CODE_FOR_subRNu_si3 = 123,
  CODE_FOR_clip_maxmin = 124,
  CODE_FOR_clip_minmax = 125,
  CODE_FOR_clipu_maxmin = 126,
  CODE_FOR_clipu_minmax = 127,
  CODE_FOR_bclrsi3 = 128,
  CODE_FOR_bsetsi3 = 129,
  CODE_FOR_extvsi = 130,
  CODE_FOR_extzvsi = 131,
  CODE_FOR_insvsi = 132,
  CODE_FOR_invsipat1 = 135,
  CODE_FOR_negsf2 = 139,
  CODE_FOR_negdf2 = 140,
  CODE_FOR_one_cmplsi2 = 141,
  CODE_FOR_one_cmpldi2 = 142,
  CODE_FOR_andsi3 = 143,
  CODE_FOR_anddi3 = 144,
  CODE_FOR_iorsi3 = 145,
  CODE_FOR_iordi3 = 146,
  CODE_FOR_xorsi3 = 147,
  CODE_FOR_xordi3 = 148,
  CODE_FOR_truncdfsf2 = 149,
  CODE_FOR_truncdisi2 = 150,
  CODE_FOR_zero_extendsidi2 = 157,
  CODE_FOR_zero_extendhisi2 = 159,
  CODE_FOR_zero_extendhidi2 = 160,
  CODE_FOR_zero_extendqihi2 = 161,
  CODE_FOR_zero_extendqisi2 = 162,
  CODE_FOR_zero_extendqidi2 = 163,
  CODE_FOR_extendsidi2 = 164,
  CODE_FOR_extendqihi2 = 165,
  CODE_FOR_extendqisi2 = 166,
  CODE_FOR_extendqidi2 = 167,
  CODE_FOR_extendhihi2 = 168,
  CODE_FOR_extendhisi2 = 169,
  CODE_FOR_extendhidi2 = 170,
  CODE_FOR_extendsfdf2 = 171,
  CODE_FOR_fix_truncdfsi2 = 172,
  CODE_FOR_fix_truncsfsi2 = 173,
  CODE_FOR_fix_truncdfdi2 = 174,
  CODE_FOR_fix_truncsfdi2 = 175,
  CODE_FOR_floatsidf2 = 176,
  CODE_FOR_floatdidf2 = 177,
  CODE_FOR_floatsisf2 = 178,
  CODE_FOR_floatdisf2 = 179,
  CODE_FOR_floatunssidf2 = 180,
  CODE_FOR_floatunsdidf2 = 181,
  CODE_FOR_floatunssisf2 = 182,
  CODE_FOR_floatunsdisf2 = 183,
  CODE_FOR_fixuns_truncdfsi2 = 184,
  CODE_FOR_fixuns_truncsfsi2 = 185,
  CODE_FOR_fixuns_truncdfdi2 = 186,
  CODE_FOR_fixuns_truncsfdi2 = 187,
  CODE_FOR_got_loadsi = 188,
  CODE_FOR_got_loaddi = 189,
  CODE_FOR_tls_add_tp_lesi = 190,
  CODE_FOR_tls_add_tp_ledi = 191,
  CODE_FOR_got_load_tls_gdsi = 192,
  CODE_FOR_got_load_tls_gddi = 193,
  CODE_FOR_got_load_tls_iesi = 194,
  CODE_FOR_got_load_tls_iedi = 195,
  CODE_FOR_loadqi_ind_reg_reg = 200,
  CODE_FOR_loadhi_ind_reg_reg = 201,
  CODE_FOR_loadsi_ind_reg_reg = 202,
  CODE_FOR_loadsf_ind_reg_reg = 203,
  CODE_FOR_loadv2hi_ind_reg_reg = 204,
  CODE_FOR_loadv4qi_ind_reg_reg = 205,
  CODE_FOR_loadqi_ext_ind_reg_reg = 206,
  CODE_FOR_loadqi_uext_ind_reg_reg = 207,
  CODE_FOR_loadhi_ext_ind_reg_reg = 208,
  CODE_FOR_loadhi_uext_ind_reg_reg = 209,
  CODE_FOR_loadsi_ext_ind_reg_reg = 210,
  CODE_FOR_loadsi_uext_ind_reg_reg = 211,
  CODE_FOR_loadsf_ext_ind_reg_reg = 212,
  CODE_FOR_loadsf_uext_ind_reg_reg = 213,
  CODE_FOR_loadv2hi_ext_ind_reg_reg = 214,
  CODE_FOR_loadv2hi_uext_ind_reg_reg = 215,
  CODE_FOR_loadv4qi_ext_ind_reg_reg = 216,
  CODE_FOR_loadv4qi_uext_ind_reg_reg = 217,
  CODE_FOR_storeqi_ind_reg_reg = 218,
  CODE_FOR_storehi_ind_reg_reg = 219,
  CODE_FOR_storesi_ind_reg_reg = 220,
  CODE_FOR_storesf_ind_reg_reg = 221,
  CODE_FOR_storev2hi_ind_reg_reg = 222,
  CODE_FOR_storev4qi_ind_reg_reg = 223,
  CODE_FOR_load_evt_unit = 224,
  CODE_FOR_read_spr = 225,
  CODE_FOR_write_spr = 226,
  CODE_FOR_spr_bit_set = 227,
  CODE_FOR_spr_bit_clr = 228,
  CODE_FOR_writesivol = 229,
  CODE_FOR_writesi = 230,
  CODE_FOR_readsivol = 231,
  CODE_FOR_readsi = 232,
  CODE_FOR_OffsetedRead = 233,
  CODE_FOR_OffsetedReadOMP = 234,
  CODE_FOR_OffsetedReadNonVol = 235,
  CODE_FOR_loadqi_ind_postinc = 236,
  CODE_FOR_loadhi_ind_postinc = 237,
  CODE_FOR_loadsi_ind_postinc = 238,
  CODE_FOR_loadsf_ind_postinc = 239,
  CODE_FOR_loadv2hi_ind_postinc = 240,
  CODE_FOR_loadv4qi_ind_postinc = 241,
  CODE_FOR_loadqi_ext_ind_postinc = 242,
  CODE_FOR_loadqi_uext_ind_postinc = 243,
  CODE_FOR_loadhi_ext_ind_postinc = 244,
  CODE_FOR_loadhi_uext_ind_postinc = 245,
  CODE_FOR_loadsi_ext_ind_postinc = 246,
  CODE_FOR_loadsi_uext_ind_postinc = 247,
  CODE_FOR_loadsf_ext_ind_postinc = 248,
  CODE_FOR_loadsf_uext_ind_postinc = 249,
  CODE_FOR_loadv2hi_ext_ind_postinc = 250,
  CODE_FOR_loadv2hi_uext_ind_postinc = 251,
  CODE_FOR_loadv4qi_ext_ind_postinc = 252,
  CODE_FOR_loadv4qi_uext_ind_postinc = 253,
  CODE_FOR_loadqi_ind_postdec = 254,
  CODE_FOR_loadhi_ind_postdec = 255,
  CODE_FOR_loadsi_ind_postdec = 256,
  CODE_FOR_loadsf_ind_postdec = 257,
  CODE_FOR_loadv2hi_ind_postdec = 258,
  CODE_FOR_loadv4qi_ind_postdec = 259,
  CODE_FOR_loadqi_ext_ind_postdec = 260,
  CODE_FOR_loadqi_uext_ind_postdec = 261,
  CODE_FOR_loadhi_ext_ind_postdec = 262,
  CODE_FOR_loadhi_uext_ind_postdec = 263,
  CODE_FOR_loadsi_ext_ind_postdec = 264,
  CODE_FOR_loadsi_uext_ind_postdec = 265,
  CODE_FOR_loadsf_ext_ind_postdec = 266,
  CODE_FOR_loadsf_uext_ind_postdec = 267,
  CODE_FOR_loadv2hi_ext_ind_postdec = 268,
  CODE_FOR_loadv2hi_uext_ind_postdec = 269,
  CODE_FOR_loadv4qi_ext_ind_postdec = 270,
  CODE_FOR_loadv4qi_uext_ind_postdec = 271,
  CODE_FOR_loadqi_ind_post_mod = 272,
  CODE_FOR_loadhi_ind_post_mod = 273,
  CODE_FOR_loadsi_ind_post_mod = 274,
  CODE_FOR_loadsf_ind_post_mod = 275,
  CODE_FOR_loadv2hi_ind_post_mod = 276,
  CODE_FOR_loadv4qi_ind_post_mod = 277,
  CODE_FOR_loadqi_ext_ind_post_mod = 278,
  CODE_FOR_loadqi_uext_ind_post_mod = 279,
  CODE_FOR_loadhi_ext_ind_post_mod = 280,
  CODE_FOR_loadhi_uext_ind_post_mod = 281,
  CODE_FOR_loadsi_ext_ind_post_mod = 282,
  CODE_FOR_loadsi_uext_ind_post_mod = 283,
  CODE_FOR_loadsf_ext_ind_post_mod = 284,
  CODE_FOR_loadsf_uext_ind_post_mod = 285,
  CODE_FOR_loadv2hi_ext_ind_post_mod = 286,
  CODE_FOR_loadv2hi_uext_ind_post_mod = 287,
  CODE_FOR_loadv4qi_ext_ind_post_mod = 288,
  CODE_FOR_loadv4qi_uext_ind_post_mod = 289,
  CODE_FOR_storeqi_ind_postinc = 290,
  CODE_FOR_storehi_ind_postinc = 291,
  CODE_FOR_storesi_ind_postinc = 292,
  CODE_FOR_storesf_ind_postinc = 293,
  CODE_FOR_storev2hi_ind_postinc = 294,
  CODE_FOR_storev4qi_ind_postinc = 295,
  CODE_FOR_storeqi_ind_postdec = 296,
  CODE_FOR_storehi_ind_postdec = 297,
  CODE_FOR_storesi_ind_postdec = 298,
  CODE_FOR_storesf_ind_postdec = 299,
  CODE_FOR_storev2hi_ind_postdec = 300,
  CODE_FOR_storev4qi_ind_postdec = 301,
  CODE_FOR_storeqi_ind_postmod = 302,
  CODE_FOR_storehi_ind_postmod = 303,
  CODE_FOR_storesi_ind_postmod = 304,
  CODE_FOR_storesf_ind_postmod = 305,
  CODE_FOR_storev2hi_ind_postmod = 306,
  CODE_FOR_storev4qi_ind_postmod = 307,
  CODE_FOR_addhihi3 = 312,
  CODE_FOR_addsihi3 = 313,
  CODE_FOR_xorhihi3 = 314,
  CODE_FOR_xorsihi3 = 315,
  CODE_FOR_load_lowdf = 323,
  CODE_FOR_load_lowdi = 324,
  CODE_FOR_load_lowtf = 325,
  CODE_FOR_load_highdf = 326,
  CODE_FOR_load_highdi = 327,
  CODE_FOR_load_hightf = 328,
  CODE_FOR_store_worddf = 329,
  CODE_FOR_store_worddi = 330,
  CODE_FOR_store_wordtf = 331,
  CODE_FOR_fence = 332,
  CODE_FOR_fence_i = 333,
  CODE_FOR_ashlsi3 = 334,
  CODE_FOR_ashrsi3 = 335,
  CODE_FOR_lshrsi3 = 336,
  CODE_FOR_ashldi3 = 345,
  CODE_FOR_ashrdi3 = 346,
  CODE_FOR_lshrdi3 = 347,
  CODE_FOR_ashlsi3_extend = 348,
  CODE_FOR_ashrsi3_extend = 349,
  CODE_FOR_lshrsi3_extend = 350,
  CODE_FOR_vec_initv2hi_internal = 351,
  CODE_FOR_vec_initv4qi_internal = 352,
  CODE_FOR_vec_pack_v2hi = 353,
  CODE_FOR_vec_pack_v4qi_lo = 354,
  CODE_FOR_vec_pack_v4qi_lo_first = 355,
  CODE_FOR_vec_pack_v4qi_hi = 356,
  CODE_FOR_vec_pack_v4qi_hi_first = 357,
  CODE_FOR_vec_permv2hi_internal2_1 = 358,
  CODE_FOR_vec_permv2hi_internal2 = 359,
  CODE_FOR_vec_permv2hi_int1 = 360,
  CODE_FOR_vec_permv4qi_internal2_1 = 361,
  CODE_FOR_vec_permv4qi_internal2 = 362,
  CODE_FOR_vec_permv4qi_int1 = 363,
  CODE_FOR_vec_setv2hi_internal = 364,
  CODE_FOR_vec_setv4qi_internal = 365,
  CODE_FOR_vec_set_fisrtv2hi_internal = 366,
  CODE_FOR_vec_set_fisrtv4qi_internal = 367,
  CODE_FOR_vec_extract_sext_qi_v2hi = 368,
  CODE_FOR_vec_extract_sext_qi_v4qi = 369,
  CODE_FOR_vec_extract_sext_hi_v2hi = 370,
  CODE_FOR_vec_extract_sext_hi_v4qi = 371,
  CODE_FOR_vec_extract_sext_si_v2hi = 372,
  CODE_FOR_vec_extract_sext_si_v4qi = 373,
  CODE_FOR_vec_extract_zext_qi_v2hi = 374,
  CODE_FOR_vec_extract_zext_qi_v4qi = 375,
  CODE_FOR_vec_extract_zext_hi_v2hi = 376,
  CODE_FOR_vec_extract_zext_hi_v4qi = 377,
  CODE_FOR_vec_extract_zext_si_v2hi = 378,
  CODE_FOR_vec_extract_zext_si_v4qi = 379,
  CODE_FOR_vec_extractv2hi = 380,
  CODE_FOR_vec_extractv4qi = 381,
  CODE_FOR_addv2hi3 = 382,
  CODE_FOR_subv2hi3 = 383,
  CODE_FOR_sminv2hi3 = 384,
  CODE_FOR_smaxv2hi3 = 385,
  CODE_FOR_addv4qi3 = 386,
  CODE_FOR_subv4qi3 = 387,
  CODE_FOR_sminv4qi3 = 388,
  CODE_FOR_smaxv4qi3 = 389,
  CODE_FOR_addscv2hi3 = 390,
  CODE_FOR_subscv2hi3 = 391,
  CODE_FOR_sminscv2hi3 = 392,
  CODE_FOR_smaxscv2hi3 = 393,
  CODE_FOR_addscv4qi3 = 394,
  CODE_FOR_subscv4qi3 = 395,
  CODE_FOR_sminscv4qi3 = 396,
  CODE_FOR_smaxscv4qi3 = 397,
  CODE_FOR_add_swap_scv2hi3 = 398,
  CODE_FOR_sub_swap_scv2hi3 = 399,
  CODE_FOR_smin_swap_scv2hi3 = 400,
  CODE_FOR_smax_swap_scv2hi3 = 401,
  CODE_FOR_add_swap_scv4qi3 = 402,
  CODE_FOR_sub_swap_scv4qi3 = 403,
  CODE_FOR_smin_swap_scv4qi3 = 404,
  CODE_FOR_smax_swap_scv4qi3 = 405,
  CODE_FOR_uminv2hi3 = 406,
  CODE_FOR_umaxv2hi3 = 407,
  CODE_FOR_uminv4qi3 = 408,
  CODE_FOR_umaxv4qi3 = 409,
  CODE_FOR_uminscv2hi3 = 410,
  CODE_FOR_umaxscv2hi3 = 411,
  CODE_FOR_uminscv4qi3 = 412,
  CODE_FOR_umaxscv4qi3 = 413,
  CODE_FOR_umin_swap_scv2hi3 = 414,
  CODE_FOR_umax_swap_scv2hi3 = 415,
  CODE_FOR_umin_swap_scv4qi3 = 416,
  CODE_FOR_umax_swap_scv4qi3 = 417,
  CODE_FOR_vlshrv2hi3 = 418,
  CODE_FOR_vashrv2hi3 = 419,
  CODE_FOR_vashlv2hi3 = 420,
  CODE_FOR_vlshrv4qi3 = 421,
  CODE_FOR_vashrv4qi3 = 422,
  CODE_FOR_vashlv4qi3 = 423,
  CODE_FOR_vlshrscv2hi3 = 424,
  CODE_FOR_vashrscv2hi3 = 425,
  CODE_FOR_vashlscv2hi3 = 426,
  CODE_FOR_vlshrscv4qi3 = 427,
  CODE_FOR_vashrscv4qi3 = 428,
  CODE_FOR_vashlscv4qi3 = 429,
  CODE_FOR_avgv2hi3 = 430,
  CODE_FOR_avgv4qi3 = 431,
  CODE_FOR_avgscv2hi3 = 432,
  CODE_FOR_avgscv4qi3 = 433,
  CODE_FOR_avgsc_swap_v2hi3 = 434,
  CODE_FOR_avgsc_swap_v4qi3 = 435,
  CODE_FOR_avgv2uhi3 = 436,
  CODE_FOR_avgv4uqi3 = 437,
  CODE_FOR_avgscv2uhi3 = 438,
  CODE_FOR_avgscv4uqi3 = 439,
  CODE_FOR_avgsc_swap_v2uhi3 = 440,
  CODE_FOR_avgsc_swap_v4uqi3 = 441,
  CODE_FOR_andv2hi3 = 442,
  CODE_FOR_iorv2hi3 = 443,
  CODE_FOR_exorv2hi3 = 444,
  CODE_FOR_andv4qi3 = 445,
  CODE_FOR_iorv4qi3 = 446,
  CODE_FOR_exorv4qi3 = 447,
  CODE_FOR_andscv2hi3 = 448,
  CODE_FOR_iorscv2hi3 = 449,
  CODE_FOR_exorscv2hi3 = 450,
  CODE_FOR_andscv4qi3 = 451,
  CODE_FOR_iorscv4qi3 = 452,
  CODE_FOR_exorscv4qi3 = 453,
  CODE_FOR_and_swap_scv2hi3 = 454,
  CODE_FOR_ior_swap_scv2hi3 = 455,
  CODE_FOR_exor_swap_scv2hi3 = 456,
  CODE_FOR_and_swap_scv4qi3 = 457,
  CODE_FOR_ior_swap_scv4qi3 = 458,
  CODE_FOR_exor_swap_scv4qi3 = 459,
  CODE_FOR_absv2hi2 = 460,
  CODE_FOR_absv4qi2 = 461,
  CODE_FOR_negv2hi2 = 462,
  CODE_FOR_negv4qi2 = 463,
  CODE_FOR_dotpv2hi = 464,
  CODE_FOR_dotspscv2hi_le = 465,
  CODE_FOR_reduc_plus_scal_v2hi = 466,
  CODE_FOR_dotupv2hi = 467,
  CODE_FOR_dotupscv2hi_le = 468,
  CODE_FOR_dotuspv2hi = 469,
  CODE_FOR_dotuspscv2hi_le = 470,
  CODE_FOR_dotpv4qi = 471,
  CODE_FOR_reduc_plus_scal_v4qi = 472,
  CODE_FOR_dotspscv4qi_le = 473,
  CODE_FOR_dotupv4qi = 474,
  CODE_FOR_dotupscv4qi_le = 475,
  CODE_FOR_dotuspv4qi = 476,
  CODE_FOR_dotuspscv4qi_le = 477,
  CODE_FOR_sdot_prodv2hi = 478,
  CODE_FOR_sdotspscv2hi_le = 479,
  CODE_FOR_udot_prodv2hi = 480,
  CODE_FOR_sdotupscv2hi_le = 481,
  CODE_FOR_sdotuspv2hi = 482,
  CODE_FOR_sdotuspscv2hi_le = 483,
  CODE_FOR_sdot_prodv4qi = 484,
  CODE_FOR_sdotspscv4qi_le = 485,
  CODE_FOR_udot_prodv4qi = 486,
  CODE_FOR_sdotupscv4qi_le = 487,
  CODE_FOR_sdotuspv4qi = 488,
  CODE_FOR_sdotuspscv4qi_le = 489,
  CODE_FOR_cmpv2hi_eq = 490,
  CODE_FOR_cmpv2hi_ne = 491,
  CODE_FOR_cmpv2hi_le = 492,
  CODE_FOR_cmpv2hi_lt = 493,
  CODE_FOR_cmpv2hi_ge = 494,
  CODE_FOR_cmpv2hi_gt = 495,
  CODE_FOR_cmpv4qi_eq = 496,
  CODE_FOR_cmpv4qi_ne = 497,
  CODE_FOR_cmpv4qi_le = 498,
  CODE_FOR_cmpv4qi_lt = 499,
  CODE_FOR_cmpv4qi_ge = 500,
  CODE_FOR_cmpv4qi_gt = 501,
  CODE_FOR_cmpv2hi_gtu = 502,
  CODE_FOR_cmpv2hi_ltu = 503,
  CODE_FOR_cmpv2hi_geu = 504,
  CODE_FOR_cmpv2hi_leu = 505,
  CODE_FOR_cmpv4qi_gtu = 506,
  CODE_FOR_cmpv4qi_ltu = 507,
  CODE_FOR_cmpv4qi_geu = 508,
  CODE_FOR_cmpv4qi_leu = 509,
  CODE_FOR_cmpv2hi_sceq = 510,
  CODE_FOR_cmpv2hi_scne = 511,
  CODE_FOR_cmpv2hi_scle = 512,
  CODE_FOR_cmpv2hi_sclt = 513,
  CODE_FOR_cmpv2hi_scge = 514,
  CODE_FOR_cmpv2hi_scgt = 515,
  CODE_FOR_cmpv2hi_scgtu = 516,
  CODE_FOR_cmpv2hi_scltu = 517,
  CODE_FOR_cmpv2hi_scgeu = 518,
  CODE_FOR_cmpv2hi_scleu = 519,
  CODE_FOR_cmpv4qi_sceq = 520,
  CODE_FOR_cmpv4qi_scne = 521,
  CODE_FOR_cmpv4qi_scle = 522,
  CODE_FOR_cmpv4qi_sclt = 523,
  CODE_FOR_cmpv4qi_scge = 524,
  CODE_FOR_cmpv4qi_scgt = 525,
  CODE_FOR_cmpv4qi_scgtu = 526,
  CODE_FOR_cmpv4qi_scltu = 527,
  CODE_FOR_cmpv4qi_scgeu = 528,
  CODE_FOR_cmpv4qi_scleu = 529,
  CODE_FOR_cmp_swap_v2hi_sceq = 530,
  CODE_FOR_cmp_swap_v2hi_scne = 531,
  CODE_FOR_cmp_swap_v2hi_scle = 532,
  CODE_FOR_cmp_swap_v2hi_sclt = 533,
  CODE_FOR_cmp_swap_v2hi_scge = 534,
  CODE_FOR_cmp_swap_v2hi_scgt = 535,
  CODE_FOR_cmp_swap_v2hi_scgtu = 536,
  CODE_FOR_cmp_swap_v2hi_scltu = 537,
  CODE_FOR_cmp_swap_v2hi_scgeu = 538,
  CODE_FOR_cmp_swap_v2hi_scleu = 539,
  CODE_FOR_cmp_swap_v4qi_sceq = 540,
  CODE_FOR_cmp_swap_v4qi_scne = 541,
  CODE_FOR_cmp_swap_v4qi_scle = 542,
  CODE_FOR_cmp_swap_v4qi_sclt = 543,
  CODE_FOR_cmp_swap_v4qi_scge = 544,
  CODE_FOR_cmp_swap_v4qi_scgt = 545,
  CODE_FOR_cmp_swap_v4qi_scgtu = 546,
  CODE_FOR_cmp_swap_v4qi_scltu = 547,
  CODE_FOR_cmp_swap_v4qi_scgeu = 548,
  CODE_FOR_cmp_swap_v4qi_scleu = 549,
  CODE_FOR_cstoresf4 = 558,
  CODE_FOR_cstoredf4 = 559,
  CODE_FOR_jump = 604,
  CODE_FOR_indirect_jumpsi = 605,
  CODE_FOR_indirect_jumpdi = 606,
  CODE_FOR_tablejumpsi = 607,
  CODE_FOR_tablejumpdi = 608,
  CODE_FOR_blockage = 609,
  CODE_FOR_simple_return = 610,
  CODE_FOR_simple_return_internal = 611,
  CODE_FOR_simple_it_return = 612,
  CODE_FOR_eh_set_lr_si = 613,
  CODE_FOR_eh_set_lr_di = 614,
  CODE_FOR_set_hwloop_lpstart = 615,
  CODE_FOR_set_hwloop_lpend = 616,
  CODE_FOR_set_hwloop_lc = 617,
  CODE_FOR_set_hwloop_lc_le = 618,
  CODE_FOR_hw_loop_prolog = 619,
  CODE_FOR_zero_cost_loop_end = 620,
  CODE_FOR_loop_end = 621,
  CODE_FOR_sibcall_internal = 622,
  CODE_FOR_sibcall_value_internal = 623,
  CODE_FOR_sibcall_value_multiple_internal = 624,
  CODE_FOR_call_internal = 625,
  CODE_FOR_call_value_internal = 626,
  CODE_FOR_call_value_multiple_internal = 627,
  CODE_FOR_nop = 628,
  CODE_FOR_forced_nop = 629,
  CODE_FOR_trap = 630,
  CODE_FOR_gpr_save = 631,
  CODE_FOR_gpr_restore = 632,
  CODE_FOR_gpr_restore_return = 633,
  CODE_FOR_mem_thread_fence_1 = 634,
  CODE_FOR_atomic_storesi = 635,
  CODE_FOR_atomic_storedi = 636,
  CODE_FOR_atomic_addsi = 637,
  CODE_FOR_atomic_orsi = 638,
  CODE_FOR_atomic_xorsi = 639,
  CODE_FOR_atomic_andsi = 640,
  CODE_FOR_atomic_adddi = 641,
  CODE_FOR_atomic_ordi = 642,
  CODE_FOR_atomic_xordi = 643,
  CODE_FOR_atomic_anddi = 644,
  CODE_FOR_atomic_fetch_addsi = 645,
  CODE_FOR_atomic_fetch_orsi = 646,
  CODE_FOR_atomic_fetch_xorsi = 647,
  CODE_FOR_atomic_fetch_andsi = 648,
  CODE_FOR_atomic_fetch_adddi = 649,
  CODE_FOR_atomic_fetch_ordi = 650,
  CODE_FOR_atomic_fetch_xordi = 651,
  CODE_FOR_atomic_fetch_anddi = 652,
  CODE_FOR_atomic_exchangesi = 653,
  CODE_FOR_atomic_exchangedi = 654,
  CODE_FOR_atomic_cas_value_strongsi = 655,
  CODE_FOR_atomic_cas_value_strongdi = 656,
  CODE_FOR_addsi3 = 686,
  CODE_FOR_adddi3 = 687,
  CODE_FOR_subsi3 = 688,
  CODE_FOR_subdi3 = 689,
  CODE_FOR_mulsi3 = 690,
  CODE_FOR_muldi3 = 691,
  CODE_FOR_mulsidi3 = 695,
  CODE_FOR_umulsidi3 = 696,
  CODE_FOR_usmulsidi3 = 697,
  CODE_FOR_clzsi2 = 698,
  CODE_FOR_movdi = 714,
  CODE_FOR_pulp_omp_barrier = 715,
  CODE_FOR_pulp_omp_critical_start = 716,
  CODE_FOR_pulp_omp_critical_end = 717,
  CODE_FOR_movsi = 718,
  CODE_FOR_movv2hi = 719,
  CODE_FOR_movv4qi = 720,
  CODE_FOR_movmisalignv4qi = 721,
  CODE_FOR_movmisalignv2hi = 722,
  CODE_FOR_movmisalignsf = 723,
  CODE_FOR_movmisalignsi = 724,
  CODE_FOR_movhi = 725,
  CODE_FOR_movqi = 726,
  CODE_FOR_movsf = 727,
  CODE_FOR_movdf = 728,
  CODE_FOR_movti = 729,
  CODE_FOR_clear_cache = 734,
  CODE_FOR_movmemsi = 735,
  CODE_FOR_vec_initv2hi = 736,
  CODE_FOR_vec_initv4qi = 737,
  CODE_FOR_vec_pack_v4qi = 738,
  CODE_FOR_vec_permv2hi = 739,
  CODE_FOR_vec_permv4qi = 740,
  CODE_FOR_vec_set_firstv2hi = 741,
  CODE_FOR_vec_set_firstv4qi = 742,
  CODE_FOR_vec_setv2hi = 743,
  CODE_FOR_vec_setv4qi = 744,
  CODE_FOR_vcondv2hiv2hi = 745,
  CODE_FOR_vcondv4qiv4qi = 746,
  CODE_FOR_vconduv2hiv2hi = 747,
  CODE_FOR_vconduv4qiv4qi = 748,
  CODE_FOR_condjump = 749,
  CODE_FOR_cbranchsi4 = 750,
  CODE_FOR_cbranchdi4 = 751,
  CODE_FOR_cbranchsf4 = 752,
  CODE_FOR_cbranchdf4 = 753,
  CODE_FOR_cstoresi4 = 758,
  CODE_FOR_cstoredi4 = 759,
  CODE_FOR_indirect_jump = 760,
  CODE_FOR_tablejump = 761,
  CODE_FOR_prologue = 762,
  CODE_FOR_epilogue = 763,
  CODE_FOR_sibcall_epilogue = 764,
  CODE_FOR_return = 765,
  CODE_FOR_eh_return = 766,
  CODE_FOR_doloop_end = 769,
  CODE_FOR_sibcall = 770,
  CODE_FOR_sibcall_value = 771,
  CODE_FOR_call = 772,
  CODE_FOR_call_value = 773,
  CODE_FOR_untyped_call = 774,
  CODE_FOR_mem_thread_fence = 775,
  CODE_FOR_atomic_compare_and_swapsi = 776,
  CODE_FOR_atomic_compare_and_swapdi = 777,
  CODE_FOR_atomic_test_and_set = 778,
  LAST_INSN_CODE = 779
};

#endif /* GCC_INSN_CODES_H */
