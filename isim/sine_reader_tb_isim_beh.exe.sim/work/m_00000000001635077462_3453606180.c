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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//afs/ir/class/ee108/groups/01/Final_Project/sine_reader.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1048575U, 0U};
static unsigned int ng3[] = {1024U, 0U};
static int ng4[] = {19, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {21, 0};
static int ng8[] = {20, 0};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};



static void Always_72_0(char *t0)
{
    char t4[8];
    char t16[8];
    char t17[8];
    char t21[8];
    char t22[8];
    char t31[8];
    char t47[8];
    char t59[8];
    char t60[8];
    char t61[8];
    char t66[8];
    char t78[8];
    char t79[8];
    char t80[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    int t89;
    char *t90;
    unsigned int t91;
    int t92;
    int t93;
    char *t94;
    unsigned int t95;
    int t96;
    int t97;
    unsigned int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 2576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 1336U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 20);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 20);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t14, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(74, ng0);

LAB16:    xsi_set_current_line(75, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 1244U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 20, t18, 20, t20, 20);
    t19 = (t0 + 1336U);
    t23 = *((char **)t19);
    memset(t22, 0, 8);
    t19 = (t22 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (t25 >> 0);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t19) = t28;
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 1048575U);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t30 & 1048575U);
    memset(t31, 0, 8);
    t32 = (t21 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB18;

LAB17:    t33 = (t22 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB19;

LAB20:    memset(t17, 0, 8);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t35) != 0)
        goto LAB24;

LAB25:    t42 = (t17 + 4);
    t43 = *((unsigned int *)t17);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB26;

LAB27:    t62 = *((unsigned int *)t17);
    t63 = (~(t62));
    t64 = *((unsigned int *)t42);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t42) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t17) > 0)
        goto LAB32;

LAB33:    memcpy(t16, t78, 8);

LAB34:    t76 = (t0 + 2024);
    t82 = (t0 + 2024);
    t83 = (t82 + 44U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng4)));
    t86 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t79, t80, t81, ((int*)(t84)), 2, t85, 32, 1, t86, 32, 1);
    t87 = (t79 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (!(t88));
    t90 = (t80 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (!(t91));
    t93 = (t89 && t92);
    t94 = (t81 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (!(t95));
    t97 = (t93 && t96);
    if (t97 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1244U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 20, t2, 20, t5, 20);
    t3 = (t0 + 1336U);
    t6 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 1048575U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 1048575U);
    memset(t31, 0, 8);
    t14 = (t21 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB38;

LAB37:    t18 = (t22 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t21) > *((unsigned int *)t22))
        goto LAB40;

LAB39:    *((unsigned int *)t31) = 1;

LAB40:    memset(t17, 0, 8);
    t20 = (t31 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t31);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t20) != 0)
        goto LAB44;

LAB45:    t24 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t24);
    t37 = (t30 || t36);
    if (t37 > 0)
        goto LAB46;

LAB47:    t38 = *((unsigned int *)t17);
    t39 = (~(t38));
    t40 = *((unsigned int *)t24);
    t43 = (t39 || t40);
    if (t43 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t24) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t17) > 0)
        goto LAB52;

LAB53:    memcpy(t16, t33, 8);

LAB54:    t34 = (t0 + 2024);
    t35 = (t0 + 2024);
    t41 = (t35 + 44U);
    t42 = *((char **)t41);
    t46 = ((char*)((ng7)));
    t48 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t47, t59, t60, ((int*)(t42)), 2, t46, 32, 1, t48, 32, 1);
    t49 = (t47 + 4);
    t44 = *((unsigned int *)t49);
    t15 = (!(t44));
    t50 = (t59 + 4);
    t45 = *((unsigned int *)t50);
    t89 = (!(t45));
    t92 = (t15 && t89);
    t57 = (t60 + 4);
    t51 = *((unsigned int *)t57);
    t93 = (!(t51));
    t96 = (t92 && t93);
    if (t96 == 1)
        goto LAB55;

LAB56:    goto LAB15;

LAB9:    xsi_set_current_line(82, ng0);

LAB57:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1244U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 20, t3, 20, t6, 20);
    t5 = (t0 + 1336U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 1048575U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 1048575U);
    memset(t31, 0, 8);
    t18 = (t21 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB59;

LAB58:    t19 = (t22 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t21) > *((unsigned int *)t22))
        goto LAB60;

LAB61:    memset(t17, 0, 8);
    t23 = (t31 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t31);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t23) != 0)
        goto LAB65;

LAB66:    t32 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t32);
    t37 = (t30 || t36);
    if (t37 > 0)
        goto LAB67;

LAB68:    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t32) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t17) > 0)
        goto LAB73;

LAB74:    memcpy(t16, t78, 8);

LAB75:    t57 = (t0 + 2024);
    t67 = (t0 + 2024);
    t68 = (t67 + 44U);
    t69 = *((char **)t68);
    t76 = ((char*)((ng4)));
    t77 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t79, t80, t81, ((int*)(t69)), 2, t76, 32, 1, t77, 32, 1);
    t82 = (t79 + 4);
    t70 = *((unsigned int *)t82);
    t89 = (!(t70));
    t83 = (t80 + 4);
    t71 = *((unsigned int *)t83);
    t92 = (!(t71));
    t93 = (t89 && t92);
    t84 = (t81 + 4);
    t72 = *((unsigned int *)t84);
    t96 = (!(t72));
    t97 = (t93 && t96);
    if (t97 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1244U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 20, t2, 20, t5, 20);
    t3 = (t0 + 1336U);
    t6 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 1048575U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 1048575U);
    memset(t31, 0, 8);
    t14 = (t21 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB79;

LAB78:    t18 = (t22 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB81;

LAB80:    *((unsigned int *)t31) = 1;

LAB81:    memset(t17, 0, 8);
    t20 = (t31 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t31);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t20) != 0)
        goto LAB85;

LAB86:    t24 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t24);
    t37 = (t30 || t36);
    if (t37 > 0)
        goto LAB87;

LAB88:    t38 = *((unsigned int *)t17);
    t39 = (~(t38));
    t40 = *((unsigned int *)t24);
    t43 = (t39 || t40);
    if (t43 > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t24) > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t17) > 0)
        goto LAB93;

LAB94:    memcpy(t16, t33, 8);

LAB95:    t34 = (t0 + 2024);
    t35 = (t0 + 2024);
    t41 = (t35 + 44U);
    t42 = *((char **)t41);
    t46 = ((char*)((ng7)));
    t48 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t47, t59, t60, ((int*)(t42)), 2, t46, 32, 1, t48, 32, 1);
    t49 = (t47 + 4);
    t44 = *((unsigned int *)t49);
    t15 = (!(t44));
    t50 = (t59 + 4);
    t45 = *((unsigned int *)t50);
    t89 = (!(t45));
    t92 = (t15 && t89);
    t57 = (t60 + 4);
    t51 = *((unsigned int *)t57);
    t93 = (!(t51));
    t96 = (t92 && t93);
    if (t96 == 1)
        goto LAB96;

LAB97:    goto LAB15;

LAB11:    xsi_set_current_line(90, ng0);

LAB98:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1244U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 20, t3, 20, t6, 20);
    t5 = (t0 + 1336U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 1048575U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 1048575U);
    memset(t31, 0, 8);
    t18 = (t21 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB100;

LAB99:    t19 = (t22 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB100;

LAB103:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB101;

LAB102:    memset(t17, 0, 8);
    t23 = (t31 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t31);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t23) != 0)
        goto LAB106;

LAB107:    t32 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t32);
    t37 = (t30 || t36);
    if (t37 > 0)
        goto LAB108;

LAB109:    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t32) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t17) > 0)
        goto LAB114;

LAB115:    memcpy(t16, t78, 8);

LAB116:    t57 = (t0 + 2024);
    t67 = (t0 + 2024);
    t68 = (t67 + 44U);
    t69 = *((char **)t68);
    t76 = ((char*)((ng4)));
    t77 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t79, t80, t81, ((int*)(t69)), 2, t76, 32, 1, t77, 32, 1);
    t82 = (t79 + 4);
    t70 = *((unsigned int *)t82);
    t89 = (!(t70));
    t83 = (t80 + 4);
    t71 = *((unsigned int *)t83);
    t92 = (!(t71));
    t93 = (t89 && t92);
    t84 = (t81 + 4);
    t72 = *((unsigned int *)t84);
    t96 = (!(t72));
    t97 = (t93 && t96);
    if (t97 == 1)
        goto LAB117;

LAB118:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1244U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 20, t2, 20, t5, 20);
    t3 = (t0 + 1336U);
    t6 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 1048575U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 1048575U);
    memset(t31, 0, 8);
    t14 = (t21 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB120;

LAB119:    t18 = (t22 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB120;

LAB123:    if (*((unsigned int *)t21) > *((unsigned int *)t22))
        goto LAB122;

LAB121:    *((unsigned int *)t31) = 1;

LAB122:    memset(t17, 0, 8);
    t20 = (t31 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t31);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t20) != 0)
        goto LAB126;

LAB127:    t24 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t24);
    t37 = (t30 || t36);
    if (t37 > 0)
        goto LAB128;

LAB129:    t38 = *((unsigned int *)t17);
    t39 = (~(t38));
    t40 = *((unsigned int *)t24);
    t43 = (t39 || t40);
    if (t43 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t24) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t17) > 0)
        goto LAB134;

LAB135:    memcpy(t16, t33, 8);

LAB136:    t34 = (t0 + 2024);
    t35 = (t0 + 2024);
    t41 = (t35 + 44U);
    t42 = *((char **)t41);
    t46 = ((char*)((ng7)));
    t48 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t47, t59, t60, ((int*)(t42)), 2, t46, 32, 1, t48, 32, 1);
    t49 = (t47 + 4);
    t44 = *((unsigned int *)t49);
    t15 = (!(t44));
    t50 = (t59 + 4);
    t45 = *((unsigned int *)t50);
    t89 = (!(t45));
    t92 = (t15 && t89);
    t57 = (t60 + 4);
    t51 = *((unsigned int *)t57);
    t93 = (!(t51));
    t96 = (t92 && t93);
    if (t96 == 1)
        goto LAB137;

LAB138:    goto LAB15;

LAB13:    xsi_set_current_line(98, ng0);

LAB139:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1244U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 20, t3, 20, t6, 20);
    t5 = (t0 + 1336U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 1048575U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 1048575U);
    memset(t31, 0, 8);
    t18 = (t21 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB141;

LAB140:    t19 = (t22 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB141;

LAB144:    if (*((unsigned int *)t21) > *((unsigned int *)t22))
        goto LAB142;

LAB143:    memset(t17, 0, 8);
    t23 = (t31 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t31);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t23) != 0)
        goto LAB147;

LAB148:    t32 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t32);
    t37 = (t30 || t36);
    if (t37 > 0)
        goto LAB149;

LAB150:    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t32) > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t17) > 0)
        goto LAB155;

LAB156:    memcpy(t16, t78, 8);

LAB157:    t57 = (t0 + 2024);
    t67 = (t0 + 2024);
    t68 = (t67 + 44U);
    t69 = *((char **)t68);
    t76 = ((char*)((ng4)));
    t77 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t79, t80, t81, ((int*)(t69)), 2, t76, 32, 1, t77, 32, 1);
    t82 = (t79 + 4);
    t70 = *((unsigned int *)t82);
    t89 = (!(t70));
    t83 = (t80 + 4);
    t71 = *((unsigned int *)t83);
    t92 = (!(t71));
    t93 = (t89 && t92);
    t84 = (t81 + 4);
    t72 = *((unsigned int *)t84);
    t96 = (!(t72));
    t97 = (t93 && t96);
    if (t97 == 1)
        goto LAB158;

LAB159:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1244U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 20, t2, 20, t5, 20);
    t3 = (t0 + 1336U);
    t6 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 1048575U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 1048575U);
    memset(t31, 0, 8);
    t14 = (t21 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB161;

LAB160:    t18 = (t22 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB161;

LAB164:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB163;

LAB162:    *((unsigned int *)t31) = 1;

LAB163:    memset(t17, 0, 8);
    t20 = (t31 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t31);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB165;

LAB166:    if (*((unsigned int *)t20) != 0)
        goto LAB167;

LAB168:    t24 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t24);
    t37 = (t30 || t36);
    if (t37 > 0)
        goto LAB169;

LAB170:    t38 = *((unsigned int *)t17);
    t39 = (~(t38));
    t40 = *((unsigned int *)t24);
    t43 = (t39 || t40);
    if (t43 > 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t24) > 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t17) > 0)
        goto LAB175;

LAB176:    memcpy(t16, t33, 8);

LAB177:    t34 = (t0 + 2024);
    t35 = (t0 + 2024);
    t41 = (t35 + 44U);
    t42 = *((char **)t41);
    t46 = ((char*)((ng7)));
    t48 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t47, t59, t60, ((int*)(t42)), 2, t46, 32, 1, t48, 32, 1);
    t49 = (t47 + 4);
    t44 = *((unsigned int *)t49);
    t15 = (!(t44));
    t50 = (t59 + 4);
    t45 = *((unsigned int *)t50);
    t89 = (!(t45));
    t92 = (t15 && t89);
    t57 = (t60 + 4);
    t51 = *((unsigned int *)t57);
    t93 = (!(t51));
    t96 = (t92 && t93);
    if (t96 == 1)
        goto LAB178;

LAB179:    goto LAB15;

LAB18:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB24:    t41 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB25;

LAB26:    t46 = ((char*)((ng2)));
    t48 = (t0 + 1336U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 1048575U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 1048575U);
    t57 = (t0 + 1244U);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 20, t47, 20, t58, 20);
    t57 = ((char*)((ng3)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 20, t59, 20, t57, 20);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 20, t46, 20, t60, 20);
    goto LAB27;

LAB28:    t67 = (t0 + 1336U);
    t68 = *((char **)t67);
    memset(t66, 0, 8);
    t67 = (t66 + 4);
    t69 = (t68 + 4);
    t70 = *((unsigned int *)t68);
    t71 = (t70 >> 0);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t69);
    t73 = (t72 >> 0);
    *((unsigned int *)t67) = t73;
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 1048575U);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 1048575U);
    t76 = (t0 + 1244U);
    t77 = *((char **)t76);
    memset(t78, 0, 8);
    xsi_vlog_unsigned_add(t78, 20, t66, 20, t77, 20);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t16, 20, t61, 20, t78, 20);
    goto LAB34;

LAB32:    memcpy(t16, t61, 8);
    goto LAB34;

LAB35:    t98 = *((unsigned int *)t81);
    t99 = (t98 + 0);
    t100 = *((unsigned int *)t79);
    t101 = *((unsigned int *)t80);
    t102 = (t100 - t101);
    t103 = (t102 + 1);
    xsi_vlogvar_assign_value(t76, t16, t99, *((unsigned int *)t80), t103);
    goto LAB36;

LAB38:    t19 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t17) = 1;
    goto LAB45;

LAB44:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB45;

LAB46:    t32 = ((char*)((ng6)));
    goto LAB47;

LAB48:    t33 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t16, 2, t32, 2, t33, 2);
    goto LAB54;

LAB52:    memcpy(t16, t32, 8);
    goto LAB54;

LAB55:    t52 = *((unsigned int *)t60);
    t97 = (t52 + 0);
    t53 = *((unsigned int *)t47);
    t54 = *((unsigned int *)t59);
    t99 = (t53 - t54);
    t102 = (t99 + 1);
    xsi_vlogvar_assign_value(t34, t16, t97, *((unsigned int *)t59), t102);
    goto LAB56;

LAB59:    t20 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB61;

LAB60:    *((unsigned int *)t31) = 1;
    goto LAB61;

LAB63:    *((unsigned int *)t17) = 1;
    goto LAB66;

LAB65:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB66;

LAB67:    t33 = ((char*)((ng1)));
    t34 = (t0 + 1336U);
    t35 = *((char **)t34);
    memset(t47, 0, 8);
    t34 = (t47 + 4);
    t41 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t47) = t39;
    t40 = *((unsigned int *)t41);
    t43 = (t40 >> 0);
    *((unsigned int *)t34) = t43;
    t44 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t44 & 1048575U);
    t45 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t45 & 1048575U);
    t42 = (t0 + 1244U);
    t46 = *((char **)t42);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_minus(t59, 20, t47, 20, t46, 20);
    t42 = ((char*)((ng3)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_minus(t60, 20, t59, 20, t42, 20);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 20, t33, 20, t60, 20);
    goto LAB68;

LAB69:    t48 = (t0 + 1336U);
    t49 = *((char **)t48);
    memset(t66, 0, 8);
    t48 = (t66 + 4);
    t50 = (t49 + 4);
    t55 = *((unsigned int *)t49);
    t56 = (t55 >> 0);
    *((unsigned int *)t66) = t56;
    t62 = *((unsigned int *)t50);
    t63 = (t62 >> 0);
    *((unsigned int *)t48) = t63;
    t64 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t64 & 1048575U);
    t65 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t65 & 1048575U);
    t57 = (t0 + 1244U);
    t58 = *((char **)t57);
    memset(t78, 0, 8);
    xsi_vlog_unsigned_minus(t78, 20, t66, 20, t58, 20);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t16, 20, t61, 20, t78, 20);
    goto LAB75;

LAB73:    memcpy(t16, t61, 8);
    goto LAB75;

LAB76:    t73 = *((unsigned int *)t81);
    t99 = (t73 + 0);
    t74 = *((unsigned int *)t79);
    t75 = *((unsigned int *)t80);
    t102 = (t74 - t75);
    t103 = (t102 + 1);
    xsi_vlogvar_assign_value(t57, t16, t99, *((unsigned int *)t80), t103);
    goto LAB77;

LAB79:    t19 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB81;

LAB83:    *((unsigned int *)t17) = 1;
    goto LAB86;

LAB85:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB86;

LAB87:    t32 = ((char*)((ng9)));
    goto LAB88;

LAB89:    t33 = ((char*)((ng6)));
    goto LAB90;

LAB91:    xsi_vlog_unsigned_bit_combine(t16, 2, t32, 2, t33, 2);
    goto LAB95;

LAB93:    memcpy(t16, t32, 8);
    goto LAB95;

LAB96:    t52 = *((unsigned int *)t60);
    t97 = (t52 + 0);
    t53 = *((unsigned int *)t47);
    t54 = *((unsigned int *)t59);
    t99 = (t53 - t54);
    t102 = (t99 + 1);
    xsi_vlogvar_assign_value(t34, t16, t97, *((unsigned int *)t59), t102);
    goto LAB97;

LAB100:    t20 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB102;

LAB101:    *((unsigned int *)t31) = 1;
    goto LAB102;

LAB104:    *((unsigned int *)t17) = 1;
    goto LAB107;

LAB106:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB107;

LAB108:    t33 = ((char*)((ng2)));
    t34 = (t0 + 1336U);
    t35 = *((char **)t34);
    memset(t47, 0, 8);
    t34 = (t47 + 4);
    t41 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t47) = t39;
    t40 = *((unsigned int *)t41);
    t43 = (t40 >> 0);
    *((unsigned int *)t34) = t43;
    t44 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t44 & 1048575U);
    t45 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t45 & 1048575U);
    t42 = (t0 + 1244U);
    t46 = *((char **)t42);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 20, t47, 20, t46, 20);
    t42 = ((char*)((ng3)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 20, t59, 20, t42, 20);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 20, t33, 20, t60, 20);
    goto LAB109;

LAB110:    t48 = (t0 + 1336U);
    t49 = *((char **)t48);
    memset(t66, 0, 8);
    t48 = (t66 + 4);
    t50 = (t49 + 4);
    t55 = *((unsigned int *)t49);
    t56 = (t55 >> 0);
    *((unsigned int *)t66) = t56;
    t62 = *((unsigned int *)t50);
    t63 = (t62 >> 0);
    *((unsigned int *)t48) = t63;
    t64 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t64 & 1048575U);
    t65 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t65 & 1048575U);
    t57 = (t0 + 1244U);
    t58 = *((char **)t57);
    memset(t78, 0, 8);
    xsi_vlog_unsigned_add(t78, 20, t66, 20, t58, 20);
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t16, 20, t61, 20, t78, 20);
    goto LAB116;

LAB114:    memcpy(t16, t61, 8);
    goto LAB116;

LAB117:    t73 = *((unsigned int *)t81);
    t99 = (t73 + 0);
    t74 = *((unsigned int *)t79);
    t75 = *((unsigned int *)t80);
    t102 = (t74 - t75);
    t103 = (t102 + 1);
    xsi_vlogvar_assign_value(t57, t16, t99, *((unsigned int *)t80), t103);
    goto LAB118;

LAB120:    t19 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB122;

LAB124:    *((unsigned int *)t17) = 1;
    goto LAB127;

LAB126:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB127;

LAB128:    t32 = ((char*)((ng10)));
    goto LAB129;

LAB130:    t33 = ((char*)((ng9)));
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t16, 2, t32, 2, t33, 2);
    goto LAB136;

LAB134:    memcpy(t16, t32, 8);
    goto LAB136;

LAB137:    t52 = *((unsigned int *)t60);
    t97 = (t52 + 0);
    t53 = *((unsigned int *)t47);
    t54 = *((unsigned int *)t59);
    t99 = (t53 - t54);
    t102 = (t99 + 1);
    xsi_vlogvar_assign_value(t34, t16, t97, *((unsigned int *)t59), t102);
    goto LAB138;

LAB141:    t20 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB143;

LAB142:    *((unsigned int *)t31) = 1;
    goto LAB143;

LAB145:    *((unsigned int *)t17) = 1;
    goto LAB148;

LAB147:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB148;

LAB149:    t33 = ((char*)((ng1)));
    t34 = (t0 + 1336U);
    t35 = *((char **)t34);
    memset(t47, 0, 8);
    t34 = (t47 + 4);
    t41 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t47) = t39;
    t40 = *((unsigned int *)t41);
    t43 = (t40 >> 0);
    *((unsigned int *)t34) = t43;
    t44 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t44 & 1048575U);
    t45 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t45 & 1048575U);
    t42 = (t0 + 1244U);
    t46 = *((char **)t42);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_minus(t59, 20, t47, 20, t46, 20);
    t42 = ((char*)((ng3)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_minus(t60, 20, t59, 20, t42, 20);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 20, t33, 20, t60, 20);
    goto LAB150;

LAB151:    t48 = (t0 + 1336U);
    t49 = *((char **)t48);
    memset(t66, 0, 8);
    t48 = (t66 + 4);
    t50 = (t49 + 4);
    t55 = *((unsigned int *)t49);
    t56 = (t55 >> 0);
    *((unsigned int *)t66) = t56;
    t62 = *((unsigned int *)t50);
    t63 = (t62 >> 0);
    *((unsigned int *)t48) = t63;
    t64 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t64 & 1048575U);
    t65 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t65 & 1048575U);
    t57 = (t0 + 1244U);
    t58 = *((char **)t57);
    memset(t78, 0, 8);
    xsi_vlog_unsigned_minus(t78, 20, t66, 20, t58, 20);
    goto LAB152;

LAB153:    xsi_vlog_unsigned_bit_combine(t16, 20, t61, 20, t78, 20);
    goto LAB157;

LAB155:    memcpy(t16, t61, 8);
    goto LAB157;

LAB158:    t73 = *((unsigned int *)t81);
    t99 = (t73 + 0);
    t74 = *((unsigned int *)t79);
    t75 = *((unsigned int *)t80);
    t102 = (t74 - t75);
    t103 = (t102 + 1);
    xsi_vlogvar_assign_value(t57, t16, t99, *((unsigned int *)t80), t103);
    goto LAB159;

LAB161:    t19 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB163;

LAB165:    *((unsigned int *)t17) = 1;
    goto LAB168;

LAB167:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB168;

LAB169:    t32 = ((char*)((ng1)));
    goto LAB170;

LAB171:    t33 = ((char*)((ng10)));
    goto LAB172;

LAB173:    xsi_vlog_unsigned_bit_combine(t16, 2, t32, 2, t33, 2);
    goto LAB177;

LAB175:    memcpy(t16, t32, 8);
    goto LAB177;

LAB178:    t52 = *((unsigned int *)t60);
    t97 = (t52 + 0);
    t53 = *((unsigned int *)t47);
    t54 = *((unsigned int *)t59);
    t99 = (t53 - t54);
    t102 = (t99 + 1);
    xsi_vlogvar_assign_value(t34, t16, t97, *((unsigned int *)t59), t102);
    goto LAB179;

}

static void Cont_118_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t42[8];
    char t58[8];
    char t100[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1336U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 20);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 20);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t32 = (t0 + 1336U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 20);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 20);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 3U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 3U);
    t41 = ((char*)((ng10)));
    memset(t42, 0, 8);
    t43 = (t31 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t31);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB11;

LAB8:    if (t54 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t42) = 1;

LAB11:    t59 = *((unsigned int *)t15);
    t60 = *((unsigned int *)t42);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = (t15 + 4);
    t63 = (t42 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB12;

LAB13:
LAB14:    memset(t4, 0, 8);
    t86 = (t58 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t58);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t86) != 0)
        goto LAB17;

LAB18:    t93 = (t4 + 4);
    t94 = *((unsigned int *)t4);
    t95 = *((unsigned int *)t93);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB19;

LAB20:    t101 = *((unsigned int *)t4);
    t102 = (~(t101));
    t103 = *((unsigned int *)t93);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t93) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t4) > 0)
        goto LAB25;

LAB26:    memcpy(t3, t105, 8);

LAB27:    t98 = (t0 + 3380);
    t106 = (t98 + 32U);
    t107 = *((char **)t106);
    t108 = (t107 + 40U);
    t109 = *((char **)t108);
    memset(t109, 0, 8);
    t110 = 65535U;
    t111 = t110;
    t112 = (t3 + 4);
    t113 = *((unsigned int *)t3);
    t110 = (t110 & t113);
    t114 = *((unsigned int *)t112);
    t111 = (t111 & t114);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t116 | t110);
    t117 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t117 | t111);
    xsi_driver_vfirst_trans(t98, 0, 15);
    t118 = (t0 + 3328);
    *((int *)t118) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB10:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB11;

LAB12:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t15 + 4);
    t73 = (t42 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (~(t74));
    t76 = *((unsigned int *)t15);
    t77 = (t76 & t75);
    t78 = *((unsigned int *)t73);
    t79 = (~(t78));
    t80 = *((unsigned int *)t42);
    t81 = (t80 & t79);
    t82 = (~(t77));
    t83 = (~(t81));
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t82);
    t85 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t85 & t83);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB17:    t92 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB18;

LAB19:    t97 = ((char*)((ng1)));
    t98 = (t0 + 1428U);
    t99 = *((char **)t98);
    memset(t100, 0, 8);
    xsi_vlog_unsigned_minus(t100, 16, t97, 16, t99, 16);
    goto LAB20;

LAB21:    t98 = (t0 + 1428U);
    t105 = *((char **)t98);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t3, 16, t100, 16, t105, 16);
    goto LAB27;

LAB25:    memcpy(t3, t100, 8);
    goto LAB27;

}

static void implSig1_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 3416);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0);
    t45 = (t0 + 3336);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 3452);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 3124U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng10)));
    t3 = (t0 + 3488);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 63U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 5);

LAB1:    return;
}


extern void work_m_00000000001635077462_3453606180_init()
{
	static char *pe[] = {(void *)Always_72_0,(void *)Cont_118_1,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000001635077462_3453606180", "isim/sine_reader_tb_isim_beh.exe.sim/work/m_00000000001635077462_3453606180.didat");
	xsi_register_executes(pe);
}
