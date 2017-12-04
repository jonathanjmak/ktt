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
    work_m_03389591354448859605_0773660786_init();
    work_m_02580701195797488590_4054677864_init();
    work_m_04396722342658220445_2401929146_init();
    work_m_02580701195797488590_0384722129_init();
    work_m_15775776533280659933_3673085417_init();
    work_m_04396722342658220445_2571492256_init();
    work_m_05273318837578341271_3453606180_init();
    work_m_01053760812894977677_3362593561_init();
    work_m_14063441296722712138_0232159019_init();
    work_m_02124867739198956563_1801464582_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_02124867739198956563_1801464582");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
