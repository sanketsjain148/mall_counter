/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "H:/SHOPPING_MALL/subtractor4bit/subtractor4bit.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {1, 0};



static void Cont_35_0(char *t0)
{
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    t2 = (t0 + 1368U);
    t7 = *((char **)t2);
    t2 = (t0 + 1368U);
    t8 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t8, 1, t7, 1, t6, 1, t5, 1);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t2 = (t3 + 4);
    t13 = (t4 + 4);
    t14 = (t9 + 4);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t22 = (t0 + 3832);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 15U;
    t28 = t27;
    t29 = (t9 + 4);
    t30 = *((unsigned int *)t9);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 3);
    t35 = (t0 + 3736);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t9) = (t20 | t21);
    goto LAB6;

}

static void Always_37_1(char *t0)
{
    char t6[8];
    char t18[8];
    char t24[8];
    char t30[8];
    char t47[8];
    char t54[8];
    char t69[8];
    char t131[8];
    char t140[8];
    char t146[8];
    char t178[8];
    char t207[8];
    char t215[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    int t170;
    int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t208;
    char *t209;
    char *t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    char *t216;
    unsigned int t217;
    int t218;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2088);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t14 = (~(t12));
    t15 = *((unsigned int *)t6);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t6), 1);
    goto LAB7;

LAB9:    xsi_set_current_line(39, ng0);

LAB11:    xsi_set_current_line(40, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t19 = (t0 + 2248);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_index_select_value(t18, 1, t9, t11, 2, t21, 32, 1);
    t22 = (t0 + 1528U);
    t23 = *((char **)t22);
    t22 = (t0 + 1488U);
    t25 = (t22 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 2248);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_index_select_value(t24, 1, t23, t26, 2, t29, 32, 1);
    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t24);
    t33 = (t31 ^ t32);
    *((unsigned int *)t30) = t33;
    t34 = (t18 + 4);
    t35 = (t24 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB12;

LAB13:
LAB14:    t44 = (t0 + 2088);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 2248);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_generic_get_index_select_value(t47, 1, t46, t50, 2, t53, 32, 1);
    t55 = *((unsigned int *)t30);
    t56 = *((unsigned int *)t47);
    t57 = (t55 ^ t56);
    *((unsigned int *)t54) = t57;
    t58 = (t30 + 4);
    t59 = (t47 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB15;

LAB16:
LAB17:    t68 = (t0 + 1928);
    t70 = (t0 + 1928);
    t71 = (t70 + 72U);
    t72 = *((char **)t71);
    t73 = (t0 + 2248);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    xsi_vlog_generic_convert_bit_index(t69, t72, 2, t75, 32, 1);
    t76 = (t69 + 4);
    t77 = *((unsigned int *)t76);
    t13 = (!(t77));
    if (t13 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 2248);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t9, 32, 1);
    t10 = (t0 + 1528U);
    t11 = *((char **)t10);
    t10 = (t0 + 1488U);
    t19 = (t10 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t18, 1, t11, t20, 2, t23, 32, 1);
    t12 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t18);
    t15 = (t12 & t14);
    *((unsigned int *)t24) = t15;
    t25 = (t6 + 4);
    t26 = (t18 + 4);
    t27 = (t24 + 4);
    t16 = *((unsigned int *)t25);
    t17 = *((unsigned int *)t26);
    t31 = (t16 | t17);
    *((unsigned int *)t27) = t31;
    t32 = *((unsigned int *)t27);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB20;

LAB21:
LAB22:    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    t34 = (t0 + 1488U);
    t36 = (t34 + 72U);
    t44 = *((char **)t36);
    t45 = (t0 + 2248);
    t46 = (t45 + 56U);
    t48 = *((char **)t46);
    xsi_vlog_generic_get_index_select_value(t30, 1, t35, t44, 2, t48, 32, 1);
    t49 = (t0 + 2088);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t0 + 2088);
    t53 = (t52 + 72U);
    t58 = *((char **)t53);
    t59 = (t0 + 2248);
    t60 = (t59 + 56U);
    t68 = *((char **)t60);
    xsi_vlog_generic_get_index_select_value(t47, 1, t51, t58, 2, t68, 32, 1);
    t67 = *((unsigned int *)t30);
    t77 = *((unsigned int *)t47);
    t79 = (t67 & t77);
    *((unsigned int *)t54) = t79;
    t70 = (t30 + 4);
    t71 = (t47 + 4);
    t72 = (t54 + 4);
    t80 = *((unsigned int *)t70);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t72) = t82;
    t83 = *((unsigned int *)t72);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB23;

LAB24:
LAB25:    t103 = *((unsigned int *)t24);
    t104 = *((unsigned int *)t54);
    t105 = (t103 | t104);
    *((unsigned int *)t69) = t105;
    t75 = (t24 + 4);
    t76 = (t54 + 4);
    t106 = (t69 + 4);
    t107 = *((unsigned int *)t75);
    t108 = *((unsigned int *)t76);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB26;

LAB27:
LAB28:    t128 = (t0 + 2088);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t132 = (t0 + 2088);
    t133 = (t132 + 72U);
    t134 = *((char **)t133);
    t135 = (t0 + 2248);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    xsi_vlog_generic_get_index_select_value(t131, 1, t130, t134, 2, t137, 32, 1);
    t138 = (t0 + 1048U);
    t139 = *((char **)t138);
    t138 = (t0 + 1008U);
    t141 = (t138 + 72U);
    t142 = *((char **)t141);
    t143 = (t0 + 2248);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    xsi_vlog_generic_get_index_select_value(t140, 1, t139, t142, 2, t145, 32, 1);
    t147 = *((unsigned int *)t131);
    t148 = *((unsigned int *)t140);
    t149 = (t147 & t148);
    *((unsigned int *)t146) = t149;
    t150 = (t131 + 4);
    t151 = (t140 + 4);
    t152 = (t146 + 4);
    t153 = *((unsigned int *)t150);
    t154 = *((unsigned int *)t151);
    t155 = (t153 | t154);
    *((unsigned int *)t152) = t155;
    t156 = *((unsigned int *)t152);
    t157 = (t156 != 0);
    if (t157 == 1)
        goto LAB29;

LAB30:
LAB31:    t179 = *((unsigned int *)t69);
    t180 = *((unsigned int *)t146);
    t181 = (t179 | t180);
    *((unsigned int *)t178) = t181;
    t182 = (t69 + 4);
    t183 = (t146 + 4);
    t184 = (t178 + 4);
    t185 = *((unsigned int *)t182);
    t186 = *((unsigned int *)t183);
    t187 = (t185 | t186);
    *((unsigned int *)t184) = t187;
    t188 = *((unsigned int *)t184);
    t189 = (t188 != 0);
    if (t189 == 1)
        goto LAB32;

LAB33:
LAB34:    t206 = (t0 + 2088);
    t208 = (t0 + 2088);
    t209 = (t208 + 72U);
    t210 = *((char **)t209);
    t211 = (t0 + 2248);
    t212 = (t211 + 56U);
    t213 = *((char **)t212);
    t214 = ((char*)((ng3)));
    memset(t215, 0, 8);
    xsi_vlog_signed_add(t215, 32, t213, 32, t214, 32);
    xsi_vlog_generic_convert_bit_index(t207, t210, 2, t215, 32, 1);
    t216 = (t207 + 4);
    t217 = *((unsigned int *)t216);
    t218 = (!(t217));
    if (t218 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB8;

LAB12:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    goto LAB14;

LAB15:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t68, t54, 0, *((unsigned int *)t69), 1);
    goto LAB19;

LAB20:    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t27);
    *((unsigned int *)t24) = (t37 | t38);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t39 = *((unsigned int *)t6);
    t40 = (~(t39));
    t41 = *((unsigned int *)t28);
    t42 = (~(t41));
    t43 = *((unsigned int *)t18);
    t55 = (~(t43));
    t56 = *((unsigned int *)t29);
    t57 = (~(t56));
    t13 = (t40 & t42);
    t78 = (t55 & t57);
    t61 = (~(t13));
    t62 = (~(t78));
    t63 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t63 & t61);
    t64 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t64 & t62);
    t65 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t65 & t61);
    t66 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t66 & t62);
    goto LAB22;

LAB23:    t85 = *((unsigned int *)t54);
    t86 = *((unsigned int *)t72);
    *((unsigned int *)t54) = (t85 | t86);
    t73 = (t30 + 4);
    t74 = (t47 + 4);
    t87 = *((unsigned int *)t30);
    t88 = (~(t87));
    t89 = *((unsigned int *)t73);
    t90 = (~(t89));
    t91 = *((unsigned int *)t47);
    t92 = (~(t91));
    t93 = *((unsigned int *)t74);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t99 & t97);
    t100 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t100 & t98);
    t101 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t101 & t97);
    t102 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t102 & t98);
    goto LAB25;

LAB26:    t112 = *((unsigned int *)t69);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t69) = (t112 | t113);
    t114 = (t24 + 4);
    t115 = (t54 + 4);
    t116 = *((unsigned int *)t114);
    t117 = (~(t116));
    t118 = *((unsigned int *)t24);
    t119 = (t118 & t117);
    t120 = *((unsigned int *)t115);
    t121 = (~(t120));
    t122 = *((unsigned int *)t54);
    t123 = (t122 & t121);
    t124 = (~(t119));
    t125 = (~(t123));
    t126 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t126 & t124);
    t127 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t127 & t125);
    goto LAB28;

LAB29:    t158 = *((unsigned int *)t146);
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t146) = (t158 | t159);
    t160 = (t131 + 4);
    t161 = (t140 + 4);
    t162 = *((unsigned int *)t131);
    t163 = (~(t162));
    t164 = *((unsigned int *)t160);
    t165 = (~(t164));
    t166 = *((unsigned int *)t140);
    t167 = (~(t166));
    t168 = *((unsigned int *)t161);
    t169 = (~(t168));
    t170 = (t163 & t165);
    t171 = (t167 & t169);
    t172 = (~(t170));
    t173 = (~(t171));
    t174 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t174 & t172);
    t175 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t175 & t173);
    t176 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t176 & t172);
    t177 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t177 & t173);
    goto LAB31;

LAB32:    t190 = *((unsigned int *)t178);
    t191 = *((unsigned int *)t184);
    *((unsigned int *)t178) = (t190 | t191);
    t192 = (t69 + 4);
    t193 = (t146 + 4);
    t194 = *((unsigned int *)t192);
    t195 = (~(t194));
    t196 = *((unsigned int *)t69);
    t197 = (t196 & t195);
    t198 = *((unsigned int *)t193);
    t199 = (~(t198));
    t200 = *((unsigned int *)t146);
    t201 = (t200 & t199);
    t202 = (~(t197));
    t203 = (~(t201));
    t204 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t204 & t202);
    t205 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t205 & t203);
    goto LAB34;

LAB35:    xsi_vlogvar_assign_value(t206, t178, 0, *((unsigned int *)t207), 1);
    goto LAB36;

}


extern void work_m_00000000001954491146_0583423774_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000001954491146_0583423774", "isim/SHOPPINGMALL_isim_beh.exe.sim/work/m_00000000001954491146_0583423774.didat");
	xsi_register_executes(pe);
}
