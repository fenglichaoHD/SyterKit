/* SPDX-License-Identifier: GPL-2.0+ */

#ifndef __SUN55IW3_REG_NCAT_H__
#define __SUN55IW3_REG_NCAT_H__

#define SUNXI_N_BROM_BASE 0x00000000
#define SUNXI_S_BROM_BASE 0x00000000
#define SUNXI_DSP0_IRAM_BASE 0x00020000
#define SUNXI_DSP0_DRAM0_BASE 0x00030000
#define SUNXI_DSP0_DRAM1_BASE 0x00038000
#define SUNXI_SRAM_A2_BASE 0x00040000
#define SUNXI_DSP0_IRAM_LOCAL_SRAM__BASE 0x00400000
#define SUNXI_DSP0_DRAM0_LOCAL_SRAM__BASE 0x00420000
#define SUNXI_DSP0_DRAM1_LOCAL_SRAM__BASE 0x00440000
#define SUNXI_GPU_BASE 0x01800000
#define SUNXI_VE3_BASE 0x01C0F000
#define SUNXI_GPIO_BASE 0x02000000
#define SUNXI_SPC_BASE 0x02000800
#define SUNXI_PWM_BASE 0x02000C00
#define SUNXI_CCMU_BASE 0x02001000
#define SUNXI_IRTX_BASE 0x02003000
#define SUNXI_IRRX_BASE 0x02005000
#define SUNXI_LEDC_BASE 0x02008000
#define SUNXI_GPADC_BASE 0x02009000
#define SUNXI_THS_BASE 0x02009400
#define SUNXI_LRADC_BASE 0x02009800
#define SUNXI_IOMMU_BASE 0x02010000
#define SUNXI_NSI_BASE 0x02020000
#define SUNXI_WDT_BASE 0x02050000
#define SUNXI_NPD_BASE 0x02070000
#define SUNXI_NSI_CPU_BASE 0x02071000
#define SUNXI_UART0_BASE 0x02500000
#define SUNXI_UART1_BASE 0x02500400
#define SUNXI_UART2_BASE 0x02500800
#define SUNXI_UART3_BASE 0x02500C00
#define SUNXI_UART4_BASE 0x02501000
#define SUNXI_UART5_BASE 0x02501400
#define SUNXI_UART6_BASE 0x02501800
#define SUNXI_UART7_BASE 0x02501C00
#define SUNXI_TWI0_BASE 0x02502000
#define SUNXI_TWI1_BASE 0x02502400
#define SUNXI_TWI2_BASE 0x02502800
#define SUNXI_TWI3_BASE 0x02502C00
#define SUNXI_TWI4_BASE 0x02503000
#define SUNXI_TWI5_BASE 0x02503400
#define SUNXI_SYSCTRL_BASE 0x03000000
#define SUNXI_TIMER_BASE 0x03008000
#define SUNXI_DMAC_BASE 0x03002000
#define SUNXI_CPUX_MSGBOX_BASE 0x03003000
#define SUNXI_CPUS_MSGBOX_BASE 0x03004000
#define SUNXI_SPINLOCK_BASE 0x03005000
#define SUNXI_SID_BASE 0x03006000
#define SUNXI_SID_SRAM_BASE 0x03006200
#define SUNXI_DCU_BASE 0x03010000
#define SUNXI_CE_NS_BASE 0x03040000
#define SUNXI_CE_S_BASE 0x03040800
#define SUNXI_CE_KEY_SRAM_BASE 0x03041000
#define SUNXI_SECURE_DEBUG_CFG_BASE 0x03042000
#define SUNXI_KEYSRAM_DEBUG_BASE 0x03042400
#define SUNXI_MEMC_BASE 0x03102000
#define SUNXI_MEMC_SMC_BASE 0x03110000
#define SUNXI_MEMC_COMMON_BASE 0x03120000
#define SUNXI_MEMC_DDRC_BASE 0x03130000
#define SUNXI_MEMC_PHY_BASE 0x03140000
#define SUNXI_CPU_GIC600_BASE 0x03400000
#define SUNXI_NAND_BASE 0x04011000
#define SUNXI_SMHC0_BASE 0x04020000
#define SUNXI_SMHC1_BASE 0x04021000
#define SUNXI_SMHC2_BASE 0x04022000
#define SUNXI_SPI0_BASE 0x04025000
#define SUNXI_SPI1_BASE 0x04026000
#define SUNXI_SPI2_BASE 0x04027000
#define SUNXI_TSC_BASE 0x04060000
#define SUNXI_USB0_BASE 0x04100000
#define SUNXI_USB1_BASE 0x04200000
#define SUNXI_GMAC0_BASE 0x04500000
#define SUNXI_GMAC1_BASE 0x04510000
#define SUNXI_SPI_FLASH_BASE 0x047F0000
#define SUNXI_PCIE_SYS_BASE 0x04800000
#define SUNXI_PCIE_DBI_BASE 0x04800000
#define SUNXI_USB3_1_BASE 0x04E00000
#define SUNXI_TOP_COMBPHY_BASE 0x04F00000
#define SUNXI_DE_BASE 0x05000000
#define SUNXI_DI_BASE 0x05400000
#define SUNXI_G2D_BASE 0x05440000
#define SUNXI_DISPLAY_TOP_BASE 0x05500000
#define SUNXI_TCON_LCD0_BASE 0x05501000
#define SUNXI_TCON_LCD1_BASE 0x05502000
#define SUNXI_TCON_TV0_BASE 0x05503000
#define SUNXI_DSI0_BASE 0x05506000
#define SUNXI_DSI1_BASE 0x05508000
#define SUNXI_HDMI_BASE 0x05520000
#define SUNXI_EDP0_BASE 0x05720000
#define SUNXI_DISPLAY1_TOP_BASE 0x05730000
#define SUNXI_TCON_LCD2_BASE 0x05731000
#define SUNXI_CSI_BASE 0x05800000
#define SUNXI_ISP_BASE 0x05900000
#define SUNXI_R_PPU_BASE 0x07001000
#define SUNXI_R_PPU1_BASE 0x07001400
#define SUNXI_R_SPC_BASE 0x07002000
#define SUNXI_R_TZMA_BASE 0x07002400
#define SUNXI_R_PRCM_BASE 0x07010000
#define SUNXI_R_WDG_BASE 0x07020400
#define SUNXI_R_TWD_BASE 0x07020800
#define SUNXI_R_PWM_BASE 0x07020C00
#define SUNXI_R_INTC_BASE 0x07021000
#define SUNXI_R_GPIO_BASE 0x07022000
#define SUNXI_CPUS_BIST_BASE 0x07031000
#define SUNXI_R_IRRX_BASE 0x07040000
#define SUNXI_PCK600_CPU_BASE 0x07050000
#define SUNXI_R_UART0_BASE 0x07080000
#define SUNXI_R_UART1_BASE 0x07080400
#define SUNXI_R_TWI0_BASE 0x07081400
#define SUNXI_R_TWI1_BASE 0x07081800
#define SUNXI_RTC_BASE 0x07090000
#define SUNXI_R_TIMER_BASE 0x07090400
#define SUNXI_R_SPI_BASE 0x07092000
#define SUNXI_DSP_CFG_BASE 0x07100000
#define SUNXI_DSP_WDG_BASE 0x07100400
#define SUNXI_DSP_INTC_BASE 0x07100800
#define SUNXI_DSP_TZMA_BASE 0x07100C00
#define SUNXI_NPU_TZMA_BASE 0x07101000
#define SUNXI_DSP_PRCM_BASE 0x07102000
#define SUNXI_ADDA_BASE 0x07110000
#define SUNXI_DMIC_BASE 0x07111000
#define SUNXI_I2S0_BASE 0x07112000
#define SUNXI_I2S1_BASE 0x07113000
#define SUNXI_I2S2_BASE 0x07114000
#define SUNXI_I2S3_BASE 0x07115000
#define SUNXI_SPDIF_BASE 0x07116000
#define SUNXI_DSP_MSGBOX_BASE 0x07120000
#define SUNXI_DSP_DMA_BASE 0x07121000
#define SUNXI_NPU_BASE 0x07122000
#define SUNXI_DSP_TIMER_BASE 0x07123000
#define SUNXI_NPU_MEM_BASE 0x07180000
#define SUNXI_CPU_SYS_CFG_BASE 0x08000000
#define SUNXI_TIMESTAMP_STA_BASE 0x08010000
#define SUNXI_TIMESTAMP_CTRL_BASE 0x08020000
#define SUNXI_IDC_BASE 0x08030000
#define SUNXI_C0_CPUX_CFG_BASE 0x09010000
#define SUNXI_C0_CPUX_MBIST_BASE 0x09020000
#define SUNXI_SPI_FLASH_XIP_BASE 0x10000000
#define SUNXI_PCIE_SLV_BASE 0x20000000

#define SUNXI_PIO_BASE (SUNXI_GPIO_BASE)
#define SUNXI_R_PIO_BASE (SUNXI_R_GPIO_BASE)
#define SUNXI_CCM_BASE (SUNXI_CCMU_BASE)
#define SUNXI_DMA_BASE (SUNXI_DMAC_BASE)
#define SUNXI_CE_BASE (SUNXI_CE_NS_BASE)
#define SUNXI_SS_BASE (SUNXI_CE_BASE)
#define SUNXI_CPUXCFG_BASE (SUNXI_CPU_SYS_CFG_BASE)
#define SUNXI_SYSCRL_BASE (SUNXI_SYSCTRL_BASE)
#define SUNXI_KEYADC_BASE (SUNXI_LRADC_BASE)
#define SUNXI_RPRCM_BASE (SUNXI_R_PRCM_BASE)
#define SUNXI_RPWM_BASE (SUNXI_R_PWM_BASE)
#define SUNXI_RPIO_BASE (SUNXI_R_GPIO_BASE)

#define SUNXI_RTWI_BASE (SUNXI_R_TWI0_BASE)
#define SUNXI_RTWI_BRG_REG (SUNXI_RPRCM_BASE + 0x019c)
#define SUNXI_RTWI0_RST_BIT (16)
#define SUNXI_RTWI0_GATING_BIT (0)
#define SUNXI_RST_BIT (16)
#define SUNXI_GATING_BIT (0)
#define SUNXI_RTC_DATA_BASE (SUNXI_RTC_BASE + 0x100)
#define RTC_XO_WRT_PROTECT (SUNXI_RTC_BASE + 0x15c)
#define RTC_XO_CTRL_REG (SUNXI_RTC_BASE + 0x160)

#define SUNXI_SMC_BASE (SUNXI_MEMC_SMC_BASE)
#define SUNXI_CPUS_CFG_BASE (0x07000400U)
#define SUNXI_RCPUCFG_BASE (SUNXI_CPUS_CFG_BASE)

#define SUNXI_SPIF_BASE (0x047F0000)

/* use for usb correct */
#define VDD_SYS_PWROFF_GATING_REG (SUNXI_RPRCM_BASE + 0x250)
#define RES_CAL_CTRL_REG (SUNXI_RPRCM_BASE + 0X310)
#define VDD_ADDA_OFF_GATING (9)
#define CAL_ANA_EN (1)
#define CAL_EN (0)

#define PLL_CTRL_REG1 (SUNXI_RPRCM_BASE + 0x244)

#define RVBARADDR0_L (SUNXI_CPUXCFG_BASE + 0x40)
#define RVBARADDR0_H (SUNXI_CPUXCFG_BASE + 0x44)

#define SRAM_CONTRL_REG0 (SUNXI_SYSCRL_BASE + 0x0)
#define SRAM_CONTRL_REG1 (SUNXI_SYSCRL_BASE + 0x4)

#define GPIO_BIAS_MAX_LEN (32)
#define GPIO_BIAS_MAIN_NAME "gpio_bias"
#define GPIO_POW_MODE_REG (0x0380)
#define GPIO_POW_MS_CTL (0x0384)
#define GPIO_POW_MODE_VAL_REG (0x0388)
#define GPIO_3_3V_MODE 0
#define GPIO_1_8V_MODE 1

/* GIC600 */
#define GIC_IROUTR(_n)       (SUNXI_CPU_GIC600_BASE + 0x6000 + 8 * (_n))
#define GICR_LPI_BASE(n)     (SUNXI_CPU_GIC600_BASE + 0x60000 + n*0x20000)
#define GICR_WAKER(m)        (GICR_LPI_BASE(m) + 0x0014)
#define GICR_PWRR(m)         (GICR_LPI_BASE(m) + 0x0024)
#define LEVEL_TRIGERRED      (0)
#define EDGE_TRIGERRED       (1)
#define GIC_IRQ_TYPE_CFG(_n) (SUNXI_CPU_GIC600_BASE + 0xc00 + 4 * (_n))
#define GIC_IRQ_MOD_CFG(_n)	 (SUNXI_CPU_GIC600_BASE + 0xd00 + 4 * (_n))

#define PIOC_REG_o_POW_MOD_SEL 0x380
#define PIOC_REG_o_POW_MS_CTL 0x384
#define PIOC_REG_o_POW_MS_VAL 0x388

#define PIOC_REG_POW_MOD_SEL (SUNXI_PIO_BASE + PIOC_REG_o_POW_MOD_SEL)
#define PIOC_REG_POW_MS_CTL (SUNXI_PIO_BASE + PIOC_REG_o_POW_MS_CTL)
#define PIOC_REG_POW_VAL (SUNXI_PIO_BASE + PIOC_REG_o_POW_MS_VAL)

#define PIOC_SEL_Px_3_3V_VOL 1
#define PIOC_SEL_Px_1_8V_VOL 0

#define PIOC_CTL_Px_ENABLE 0
#define PIOC_CTL_Px_DISABLE 1

#define PIOC_VAL_Px_3_3V_VOL 0
#define PIOC_VAL_Px_1_8V_VOL 1

#define PIOC_CTL_Px_DEFUALT PIOC_CTL_Px_ENABLE
#define PIOC_SEL_Px_DEFAULT PIOC_SEL_Px_1_8V_VOL

/* rtc vccio detected */
#define FORCE_DETECTER_OUTPUT		(1 << 7)
#define DEBOUNCE_NO_BYPASS		(1 << 8)
#define VCCIO_THRESHOLD_VOLTAGE_2_5	(0 << 4)
#define VCCIO_THRESHOLD_VOLTAGE_2_6	(1 << 4)
#define VCCIO_THRESHOLD_VOLTAGE_2_7	(2 << 4)
#define VCCIO_THRESHOLD_VOLTAGE_2_8	(3 << 4)
#define VCCIO_THRESHOLD_VOLTAGE_2_9	(4 << 4)
#define VCCIO_THRESHOLD_VOLTAGE_3_0	(5 << 4)
#define VCCIO_THRESHOLD_MASK		0x7
#define VCCIO_DET_BYPASS_EN		(1 << 0)
#define VDD_OFF_GATING_CTRL_REG		0x1f4

/* R SPI */
#define SUNXI_S_SPI_CLK_REG 0x0150
#define SUNXI_S_SPI_BGR_REG 0x015C

#endif// __SUN55IW3_REG_NCAT_H__
