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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_03389591354448859605_0923144499_init();
    work_m_02580701195797488590_4054677864_init();
    work_m_03389591354448859605_0773660786_init();
    work_m_02303725588287361086_1636751176_init();
    work_m_05817371831425714499_2887619308_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05817371831425714499_2887619308");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
