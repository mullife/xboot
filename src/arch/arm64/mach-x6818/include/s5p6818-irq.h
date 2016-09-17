#ifndef __S5P6818_IRQ_H__
#define __S5P6818_IRQ_H__

#ifdef __cplusplus
extern "C" {
#endif

#define S5P6818_IRQ_MCUSTOP		(0)
#define S5P6818_IRQ_DMA0		(1)
#define S5P6818_IRQ_DMA1		(2)
#define S5P6818_IRQ_CLKPWR0		(3)
#define S5P6818_IRQ_GPIOALV		(4)
#define S5P6818_IRQ_CLKPWR2		(5)
#define S5P6818_IRQ_UART1		(6)
#define S5P6818_IRQ_UART0		(7)
#define S5P6818_IRQ_UART2		(8)
#define S5P6818_IRQ_UART3		(9)
#define S5P6818_IRQ_UART4		(10)
#define S5P6818_IRQ_SSP0		(12)
#define S5P6818_IRQ_SSP1		(13)
#define S5P6818_IRQ_SSP2		(14)
#define S5P6818_IRQ_I2C0		(15)
#define S5P6818_IRQ_I2C1		(16)
#define S5P6818_IRQ_I2C2		(17)
#define S5P6818_IRQ_DEINTERLACE	(18)
#define S5P6818_IRQ_SCALER		(19)
#define S5P6818_IRQ_AC97		(20)
#define S5P6818_IRQ_SPDIFRX		(21)
#define S5P6818_IRQ_SPDIFTX		(22)
#define S5P6818_IRQ_TIMER0		(23)
#define S5P6818_IRQ_TIMER1		(24)
#define S5P6818_IRQ_TIMER2		(25)
#define S5P6818_IRQ_TIMER3		(26)
#define S5P6818_IRQ_PWM0		(27)
#define S5P6818_IRQ_PWM1		(28)
#define S5P6818_IRQ_PWM2		(29)
#define S5P6818_IRQ_PWM3		(30)
#define S5P6818_IRQ_WDT			(31)

#define S5P6818_IRQ_MPEGTSI		(32)
#define S5P6818_IRQ_DISPLAYTOP0	(33)
#define S5P6818_IRQ_DISPLAYTOP1	(34)
#define S5P6818_IRQ_DISPLAYTOP2	(35)
#define S5P6818_IRQ_DISPLAYTOP3	(36)
#define S5P6818_IRQ_VIP0		(37)
#define S5P6818_IRQ_VIP1		(38)
#define S5P6818_IRQ_MIPI		(39)
#define S5P6818_IRQ_3DGPU		(40)
#define S5P6818_IRQ_ADC			(41)
#define S5P6818_IRQ_PPM			(42)
#define S5P6818_IRQ_SDMMC0		(43)
#define S5P6818_IRQ_SDMMC1		(44)
#define S5P6818_IRQ_SDMMC2		(45)
#define S5P6818_IRQ_CODA9600	(46)
#define S5P6818_IRQ_CODA9601	(47)
#define S5P6818_IRQ_GMAC		(48)
#define S5P6818_IRQ_USB20OTG	(49)
#define S5P6818_IRQ_USB20HOST	(50)
#define S5P6818_IRQ_GPIOA		(53)
#define S5P6818_IRQ_GPIOB		(54)
#define S5P6818_IRQ_GPIOC		(55)
#define S5P6818_IRQ_GPIOD		(56)
#define S5P6818_IRQ_GPIOE		(57)
#define S5P6818_IRQ_CRYPTO		(58)
#define S5P6818_IRQ_PDM			(59)

#define S5P6818_IRQ_GPIOA0		(64)
#define S5P6818_IRQ_GPIOA1		(65)
#define S5P6818_IRQ_GPIOA2		(66)
#define S5P6818_IRQ_GPIOA3		(67)
#define S5P6818_IRQ_GPIOA4		(68)
#define S5P6818_IRQ_GPIOA5		(69)
#define S5P6818_IRQ_GPIOA6		(70)
#define S5P6818_IRQ_GPIOA7		(71)
#define S5P6818_IRQ_GPIOA8		(72)
#define S5P6818_IRQ_GPIOA9		(73)
#define S5P6818_IRQ_GPIOA10		(74)
#define S5P6818_IRQ_GPIOA11		(75)
#define S5P6818_IRQ_GPIOA12		(76)
#define S5P6818_IRQ_GPIOA13		(77)
#define S5P6818_IRQ_GPIOA14		(78)
#define S5P6818_IRQ_GPIOA15		(79)
#define S5P6818_IRQ_GPIOA16		(80)
#define S5P6818_IRQ_GPIOA17		(81)
#define S5P6818_IRQ_GPIOA18		(82)
#define S5P6818_IRQ_GPIOA19		(83)
#define S5P6818_IRQ_GPIOA20		(84)
#define S5P6818_IRQ_GPIOA21		(85)
#define S5P6818_IRQ_GPIOA22		(86)
#define S5P6818_IRQ_GPIOA23		(87)
#define S5P6818_IRQ_GPIOA24		(88)
#define S5P6818_IRQ_GPIOA25		(89)
#define S5P6818_IRQ_GPIOA26		(90)
#define S5P6818_IRQ_GPIOA27		(91)
#define S5P6818_IRQ_GPIOA28		(92)
#define S5P6818_IRQ_GPIOA29		(93)
#define S5P6818_IRQ_GPIOA30		(94)
#define S5P6818_IRQ_GPIOA31		(95)

#define S5P6818_IRQ_GPIOB0		(96)
#define S5P6818_IRQ_GPIOB1		(97)
#define S5P6818_IRQ_GPIOB2		(98)
#define S5P6818_IRQ_GPIOB3		(99)
#define S5P6818_IRQ_GPIOB4		(100)
#define S5P6818_IRQ_GPIOB5		(101)
#define S5P6818_IRQ_GPIOB6		(102)
#define S5P6818_IRQ_GPIOB7		(103)
#define S5P6818_IRQ_GPIOB8		(104)
#define S5P6818_IRQ_GPIOB9		(105)
#define S5P6818_IRQ_GPIOB10		(106)
#define S5P6818_IRQ_GPIOB11		(107)
#define S5P6818_IRQ_GPIOB12		(108)
#define S5P6818_IRQ_GPIOB13		(109)
#define S5P6818_IRQ_GPIOB14		(110)
#define S5P6818_IRQ_GPIOB15		(111)
#define S5P6818_IRQ_GPIOB16		(112)
#define S5P6818_IRQ_GPIOB17		(113)
#define S5P6818_IRQ_GPIOB18		(114)
#define S5P6818_IRQ_GPIOB19		(115)
#define S5P6818_IRQ_GPIOB20		(116)
#define S5P6818_IRQ_GPIOB21		(117)
#define S5P6818_IRQ_GPIOB22		(118)
#define S5P6818_IRQ_GPIOB23		(119)
#define S5P6818_IRQ_GPIOB24		(120)
#define S5P6818_IRQ_GPIOB25		(121)
#define S5P6818_IRQ_GPIOB26		(122)
#define S5P6818_IRQ_GPIOB27		(123)
#define S5P6818_IRQ_GPIOB28		(124)
#define S5P6818_IRQ_GPIOB29		(125)
#define S5P6818_IRQ_GPIOB30		(126)
#define S5P6818_IRQ_GPIOB31		(127)

#define S5P6818_IRQ_GPIOC0		(128)
#define S5P6818_IRQ_GPIOC1		(129)
#define S5P6818_IRQ_GPIOC2		(130)
#define S5P6818_IRQ_GPIOC3		(131)
#define S5P6818_IRQ_GPIOC4		(132)
#define S5P6818_IRQ_GPIOC5		(133)
#define S5P6818_IRQ_GPIOC6		(134)
#define S5P6818_IRQ_GPIOC7		(135)
#define S5P6818_IRQ_GPIOC8		(136)
#define S5P6818_IRQ_GPIOC9		(137)
#define S5P6818_IRQ_GPIOC10		(138)
#define S5P6818_IRQ_GPIOC11		(139)
#define S5P6818_IRQ_GPIOC12		(140)
#define S5P6818_IRQ_GPIOC13		(141)
#define S5P6818_IRQ_GPIOC14		(142)
#define S5P6818_IRQ_GPIOC15		(143)
#define S5P6818_IRQ_GPIOC16		(144)
#define S5P6818_IRQ_GPIOC17		(145)
#define S5P6818_IRQ_GPIOC18		(146)
#define S5P6818_IRQ_GPIOC19		(147)
#define S5P6818_IRQ_GPIOC20		(148)
#define S5P6818_IRQ_GPIOC21		(149)
#define S5P6818_IRQ_GPIOC22		(150)
#define S5P6818_IRQ_GPIOC23		(151)
#define S5P6818_IRQ_GPIOC24		(152)
#define S5P6818_IRQ_GPIOC25		(153)
#define S5P6818_IRQ_GPIOC26		(154)
#define S5P6818_IRQ_GPIOC27		(155)
#define S5P6818_IRQ_GPIOC28		(156)
#define S5P6818_IRQ_GPIOC29		(157)
#define S5P6818_IRQ_GPIOC30		(158)
#define S5P6818_IRQ_GPIOC31		(159)

#define S5P6818_IRQ_GPIOD0		(160)
#define S5P6818_IRQ_GPIOD1		(161)
#define S5P6818_IRQ_GPIOD2		(162)
#define S5P6818_IRQ_GPIOD3		(163)
#define S5P6818_IRQ_GPIOD4		(164)
#define S5P6818_IRQ_GPIOD5		(165)
#define S5P6818_IRQ_GPIOD6		(166)
#define S5P6818_IRQ_GPIOD7		(167)
#define S5P6818_IRQ_GPIOD8		(168)
#define S5P6818_IRQ_GPIOD9		(169)
#define S5P6818_IRQ_GPIOD10		(170)
#define S5P6818_IRQ_GPIOD11		(171)
#define S5P6818_IRQ_GPIOD12		(172)
#define S5P6818_IRQ_GPIOD13		(173)
#define S5P6818_IRQ_GPIOD14		(174)
#define S5P6818_IRQ_GPIOD15		(175)
#define S5P6818_IRQ_GPIOD16		(176)
#define S5P6818_IRQ_GPIOD17		(177)
#define S5P6818_IRQ_GPIOD18		(178)
#define S5P6818_IRQ_GPIOD19		(179)
#define S5P6818_IRQ_GPIOD20		(180)
#define S5P6818_IRQ_GPIOD21		(181)
#define S5P6818_IRQ_GPIOD22		(182)
#define S5P6818_IRQ_GPIOD23		(183)
#define S5P6818_IRQ_GPIOD24		(184)
#define S5P6818_IRQ_GPIOD25		(185)
#define S5P6818_IRQ_GPIOD26		(186)
#define S5P6818_IRQ_GPIOD27		(187)
#define S5P6818_IRQ_GPIOD28		(188)
#define S5P6818_IRQ_GPIOD29		(189)
#define S5P6818_IRQ_GPIOD30		(190)
#define S5P6818_IRQ_GPIOD31		(191)

#define S5P6818_IRQ_GPIOE0		(192)
#define S5P6818_IRQ_GPIOE1		(193)
#define S5P6818_IRQ_GPIOE2		(194)
#define S5P6818_IRQ_GPIOE3		(195)
#define S5P6818_IRQ_GPIOE4		(196)
#define S5P6818_IRQ_GPIOE5		(197)
#define S5P6818_IRQ_GPIOE6		(198)
#define S5P6818_IRQ_GPIOE7		(199)
#define S5P6818_IRQ_GPIOE8		(200)
#define S5P6818_IRQ_GPIOE9		(201)
#define S5P6818_IRQ_GPIOE10		(202)
#define S5P6818_IRQ_GPIOE11		(203)
#define S5P6818_IRQ_GPIOE12		(204)
#define S5P6818_IRQ_GPIOE13		(205)
#define S5P6818_IRQ_GPIOE14		(206)
#define S5P6818_IRQ_GPIOE15		(207)
#define S5P6818_IRQ_GPIOE16		(208)
#define S5P6818_IRQ_GPIOE17		(209)
#define S5P6818_IRQ_GPIOE18		(210)
#define S5P6818_IRQ_GPIOE19		(211)
#define S5P6818_IRQ_GPIOE20		(212)
#define S5P6818_IRQ_GPIOE21		(213)
#define S5P6818_IRQ_GPIOE22		(214)
#define S5P6818_IRQ_GPIOE23		(215)
#define S5P6818_IRQ_GPIOE24		(216)
#define S5P6818_IRQ_GPIOE25		(217)
#define S5P6818_IRQ_GPIOE26		(218)
#define S5P6818_IRQ_GPIOE27		(219)
#define S5P6818_IRQ_GPIOE28		(220)
#define S5P6818_IRQ_GPIOE29		(221)
#define S5P6818_IRQ_GPIOE30		(222)
#define S5P6818_IRQ_GPIOE31		(223)

#define S5P6818_IRQ_GPIOALV0	(224)
#define S5P6818_IRQ_GPIOALV1	(225)
#define S5P6818_IRQ_GPIOALV2	(226)
#define S5P6818_IRQ_GPIOALV3	(227)
#define S5P6818_IRQ_GPIOALV4	(228)
#define S5P6818_IRQ_GPIOALV5	(229)

#ifdef __cplusplus
}
#endif

#endif /* __S5P6818_IRQ_H__ */
