#ifndef BOARD_AM43XX_H
#define BOARD_AM43XX_H

/* Structure for ft5x0x */
struct ft5x0x_ts_platform_data {
	u16    irq;            /* irq number of ts used */
	u8     polling_mode;   /* set 1 for polling mode and 0 for interruputing mode */
	u8     multi_touch;    /* set 1 if supporting multi-touch */
};

#endif
