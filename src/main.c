/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/zephyr.h>

void main(void)
{
    printk("Hello World! %s\n", CONFIG_BOARD);
    uint32_t counter = 0;
    while (true)
    {
        printk("Counter value:%d\n", counter++);
        k_msleep(1000);
    }
}
