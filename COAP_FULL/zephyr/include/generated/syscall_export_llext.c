
/* Export syscalls for extensions */
static void * const no_handler = NULL;

/* Weak references, if something is not found by the linker, it will be NULL
 * and simply fail during extension load
 */
extern __weak ALIAS_OF(no_handler) void * const z_impl_zephyr_read_stdin;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zephyr_write_stdout;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zephyr_fputc;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zephyr_fwrite;
extern __weak ALIAS_OF(no_handler) void * const z_impl___posix_clock_get_base;
extern __weak ALIAS_OF(no_handler) void * const z_impl_z_sys_mutex_kernel_lock;
extern __weak ALIAS_OF(no_handler) void * const z_impl_z_sys_mutex_kernel_unlock;
extern __weak ALIAS_OF(no_handler) void * const z_impl_z_log_msg_simple_create_0;
extern __weak ALIAS_OF(no_handler) void * const z_impl_z_log_msg_simple_create_1;
extern __weak ALIAS_OF(no_handler) void * const z_impl_z_log_msg_simple_create_2;
extern __weak ALIAS_OF(no_handler) void * const z_impl_z_log_msg_static_create;
extern __weak ALIAS_OF(no_handler) void * const z_impl_log_panic;
extern __weak ALIAS_OF(no_handler) void * const z_impl_log_process;
extern __weak ALIAS_OF(no_handler) void * const z_impl_log_buffered_cnt;
extern __weak ALIAS_OF(no_handler) void * const z_impl_log_filter_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_log_frontend_filter_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sys_rand_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sys_csrand_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv6_addr_lookup_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv6_addr_add_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv6_addr_rm_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv4_addr_lookup_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv4_addr_add_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv4_addr_rm_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv4_set_netmask_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv4_set_netmask_by_addr_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_ipv4_set_gw_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_if_get_by_index;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_addr_pton;
extern __weak ALIAS_OF(no_handler) void * const z_impl_net_addr_ntop;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_get_context_object;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_socket;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_socketpair;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_close;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_shutdown;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_bind;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_connect;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_listen;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_accept;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_sendto;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_sendmsg;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_recvfrom;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_recvmsg;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_fcntl_impl;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_ioctl_impl;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_poll;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_getsockopt;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_setsockopt;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_getpeername;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_getsockname;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_gethostname;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_inet_pton;
extern __weak ALIAS_OF(no_handler) void * const z_impl_z_zsock_getaddrinfo_internal;
extern __weak ALIAS_OF(no_handler) void * const z_impl_zsock_select;
extern __weak ALIAS_OF(no_handler) void * const z_impl_entropy_get_entropy;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_read;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_write;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_erase;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_get_page_info_by_offs;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_get_page_info_by_idx;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_get_page_count;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_sfdp_read;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_read_jedec_id;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_get_write_block_size;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_get_parameters;
extern __weak ALIAS_OF(no_handler) void * const z_impl_flash_ex_op;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_pin_interrupt_configure;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_pin_configure;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_port_get_direction;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_pin_get_config;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_port_get_raw;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_port_set_masked_raw;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_port_set_bits_raw;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_port_clear_bits_raw;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_port_toggle_bits;
extern __weak ALIAS_OF(no_handler) void * const z_impl_gpio_get_pending_int;
extern __weak ALIAS_OF(no_handler) void * const z_impl_i2c_configure;
extern __weak ALIAS_OF(no_handler) void * const z_impl_i2c_get_config;
extern __weak ALIAS_OF(no_handler) void * const z_impl_i2c_transfer;
extern __weak ALIAS_OF(no_handler) void * const z_impl_i2c_recover_bus;
extern __weak ALIAS_OF(no_handler) void * const z_impl_i2c_target_driver_register;
extern __weak ALIAS_OF(no_handler) void * const z_impl_i2c_target_driver_unregister;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_blink;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_get_info;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_set_brightness;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_write_channels;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_set_channel;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_set_color;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_on;
extern __weak ALIAS_OF(no_handler) void * const z_impl_led_off;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sensor_attr_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sensor_attr_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sensor_sample_fetch;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sensor_sample_fetch_chan;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sensor_channel_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sensor_get_decoder;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sensor_reconfigure_read_iodev;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_err_check;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_poll_in;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_poll_in_u16;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_poll_out;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_poll_out_u16;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_configure;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_config_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_tx_enable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_tx_disable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_rx_enable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_rx_disable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_err_enable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_err_disable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_is_pending;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_irq_update;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_tx;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_tx_u16;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_tx_abort;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_rx_enable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_rx_enable_u16;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_rx_disable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_line_ctrl_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_line_ctrl_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_uart_drv_cmd;
extern __weak ALIAS_OF(no_handler) void * const z_impl_device_get_binding;
extern __weak ALIAS_OF(no_handler) void * const z_impl_device_is_ready;
extern __weak ALIAS_OF(no_handler) void * const z_impl_device_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_stack_alloc;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_stack_free;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_create;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_stack_space_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_join;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_sleep;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_usleep;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_busy_wait;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_yield;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_wakeup;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_sched_current_thread_query;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_abort;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_start;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_timeout_expires_ticks;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_timeout_remaining_ticks;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_priority_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_priority_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_deadline_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_suspend;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_resume;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_is_preempt_thread;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_custom_data_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_custom_data_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_name_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_thread_name_copy;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_start;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_stop;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_status_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_status_sync;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_expires_ticks;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_remaining_ticks;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_user_data_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_timer_user_data_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_uptime_ticks;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_cancel_wait;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_alloc_append;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_alloc_prepend;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_is_empty;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_peek_head;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_queue_peek_tail;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_futex_wait;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_futex_wake;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_event_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_event_post;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_event_set;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_event_set_masked;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_event_clear;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_event_wait;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_event_wait_all;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_stack_alloc_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_stack_push;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_stack_pop;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_mutex_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_mutex_lock;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_mutex_unlock;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_condvar_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_condvar_signal;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_condvar_broadcast;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_condvar_wait;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_sem_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_sem_take;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_sem_give;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_sem_reset;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_sem_count_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_alloc_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_put;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_peek;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_peek_at;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_purge;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_num_free_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_get_attrs;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_msgq_num_used_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_pipe_alloc_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_pipe_put;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_pipe_get;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_pipe_read_avail;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_pipe_write_avail;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_pipe_flush;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_pipe_buffer_flush;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_poll;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_poll_signal_init;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_poll_signal_reset;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_poll_signal_check;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_poll_signal_raise;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_str_out;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_float_disable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_float_enable;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_object_access_grant;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_object_release;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_object_alloc;
extern __weak ALIAS_OF(no_handler) void * const z_impl_k_object_alloc_size;
extern __weak ALIAS_OF(no_handler) void * const z_impl_sys_clock_hw_cycles_per_sec_runtime_get;

/* Exported symbols */
EXPORT_SYMBOL(z_impl_zephyr_read_stdin);
EXPORT_SYMBOL(z_impl_zephyr_write_stdout);
EXPORT_SYMBOL(z_impl_zephyr_fputc);
EXPORT_SYMBOL(z_impl_zephyr_fwrite);
EXPORT_SYMBOL(z_impl___posix_clock_get_base);
EXPORT_SYMBOL(z_impl_z_sys_mutex_kernel_lock);
EXPORT_SYMBOL(z_impl_z_sys_mutex_kernel_unlock);
EXPORT_SYMBOL(z_impl_z_log_msg_simple_create_0);
EXPORT_SYMBOL(z_impl_z_log_msg_simple_create_1);
EXPORT_SYMBOL(z_impl_z_log_msg_simple_create_2);
EXPORT_SYMBOL(z_impl_z_log_msg_static_create);
EXPORT_SYMBOL(z_impl_log_panic);
EXPORT_SYMBOL(z_impl_log_process);
EXPORT_SYMBOL(z_impl_log_buffered_cnt);
EXPORT_SYMBOL(z_impl_log_filter_set);
EXPORT_SYMBOL(z_impl_log_frontend_filter_set);
EXPORT_SYMBOL(z_impl_sys_rand_get);
EXPORT_SYMBOL(z_impl_sys_csrand_get);
EXPORT_SYMBOL(z_impl_net_if_ipv6_addr_lookup_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv6_addr_add_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv6_addr_rm_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv4_addr_lookup_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv4_addr_add_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv4_addr_rm_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv4_set_netmask_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv4_set_netmask_by_addr_by_index);
EXPORT_SYMBOL(z_impl_net_if_ipv4_set_gw_by_index);
EXPORT_SYMBOL(z_impl_net_if_get_by_index);
EXPORT_SYMBOL(z_impl_net_addr_pton);
EXPORT_SYMBOL(z_impl_net_addr_ntop);
EXPORT_SYMBOL(z_impl_zsock_get_context_object);
EXPORT_SYMBOL(z_impl_zsock_socket);
EXPORT_SYMBOL(z_impl_zsock_socketpair);
EXPORT_SYMBOL(z_impl_zsock_close);
EXPORT_SYMBOL(z_impl_zsock_shutdown);
EXPORT_SYMBOL(z_impl_zsock_bind);
EXPORT_SYMBOL(z_impl_zsock_connect);
EXPORT_SYMBOL(z_impl_zsock_listen);
EXPORT_SYMBOL(z_impl_zsock_accept);
EXPORT_SYMBOL(z_impl_zsock_sendto);
EXPORT_SYMBOL(z_impl_zsock_sendmsg);
EXPORT_SYMBOL(z_impl_zsock_recvfrom);
EXPORT_SYMBOL(z_impl_zsock_recvmsg);
EXPORT_SYMBOL(z_impl_zsock_fcntl_impl);
EXPORT_SYMBOL(z_impl_zsock_ioctl_impl);
EXPORT_SYMBOL(z_impl_zsock_poll);
EXPORT_SYMBOL(z_impl_zsock_getsockopt);
EXPORT_SYMBOL(z_impl_zsock_setsockopt);
EXPORT_SYMBOL(z_impl_zsock_getpeername);
EXPORT_SYMBOL(z_impl_zsock_getsockname);
EXPORT_SYMBOL(z_impl_zsock_gethostname);
EXPORT_SYMBOL(z_impl_zsock_inet_pton);
EXPORT_SYMBOL(z_impl_z_zsock_getaddrinfo_internal);
EXPORT_SYMBOL(z_impl_zsock_select);
EXPORT_SYMBOL(z_impl_entropy_get_entropy);
EXPORT_SYMBOL(z_impl_flash_read);
EXPORT_SYMBOL(z_impl_flash_write);
EXPORT_SYMBOL(z_impl_flash_erase);
EXPORT_SYMBOL(z_impl_flash_get_page_info_by_offs);
EXPORT_SYMBOL(z_impl_flash_get_page_info_by_idx);
EXPORT_SYMBOL(z_impl_flash_get_page_count);
EXPORT_SYMBOL(z_impl_flash_sfdp_read);
EXPORT_SYMBOL(z_impl_flash_read_jedec_id);
EXPORT_SYMBOL(z_impl_flash_get_write_block_size);
EXPORT_SYMBOL(z_impl_flash_get_parameters);
EXPORT_SYMBOL(z_impl_flash_ex_op);
EXPORT_SYMBOL(z_impl_gpio_pin_interrupt_configure);
EXPORT_SYMBOL(z_impl_gpio_pin_configure);
EXPORT_SYMBOL(z_impl_gpio_port_get_direction);
EXPORT_SYMBOL(z_impl_gpio_pin_get_config);
EXPORT_SYMBOL(z_impl_gpio_port_get_raw);
EXPORT_SYMBOL(z_impl_gpio_port_set_masked_raw);
EXPORT_SYMBOL(z_impl_gpio_port_set_bits_raw);
EXPORT_SYMBOL(z_impl_gpio_port_clear_bits_raw);
EXPORT_SYMBOL(z_impl_gpio_port_toggle_bits);
EXPORT_SYMBOL(z_impl_gpio_get_pending_int);
EXPORT_SYMBOL(z_impl_i2c_configure);
EXPORT_SYMBOL(z_impl_i2c_get_config);
EXPORT_SYMBOL(z_impl_i2c_transfer);
EXPORT_SYMBOL(z_impl_i2c_recover_bus);
EXPORT_SYMBOL(z_impl_i2c_target_driver_register);
EXPORT_SYMBOL(z_impl_i2c_target_driver_unregister);
EXPORT_SYMBOL(z_impl_led_blink);
EXPORT_SYMBOL(z_impl_led_get_info);
EXPORT_SYMBOL(z_impl_led_set_brightness);
EXPORT_SYMBOL(z_impl_led_write_channels);
EXPORT_SYMBOL(z_impl_led_set_channel);
EXPORT_SYMBOL(z_impl_led_set_color);
EXPORT_SYMBOL(z_impl_led_on);
EXPORT_SYMBOL(z_impl_led_off);
EXPORT_SYMBOL(z_impl_sensor_attr_set);
EXPORT_SYMBOL(z_impl_sensor_attr_get);
EXPORT_SYMBOL(z_impl_sensor_sample_fetch);
EXPORT_SYMBOL(z_impl_sensor_sample_fetch_chan);
EXPORT_SYMBOL(z_impl_sensor_channel_get);
EXPORT_SYMBOL(z_impl_sensor_get_decoder);
EXPORT_SYMBOL(z_impl_sensor_reconfigure_read_iodev);
EXPORT_SYMBOL(z_impl_uart_err_check);
EXPORT_SYMBOL(z_impl_uart_poll_in);
EXPORT_SYMBOL(z_impl_uart_poll_in_u16);
EXPORT_SYMBOL(z_impl_uart_poll_out);
EXPORT_SYMBOL(z_impl_uart_poll_out_u16);
EXPORT_SYMBOL(z_impl_uart_configure);
EXPORT_SYMBOL(z_impl_uart_config_get);
EXPORT_SYMBOL(z_impl_uart_irq_tx_enable);
EXPORT_SYMBOL(z_impl_uart_irq_tx_disable);
EXPORT_SYMBOL(z_impl_uart_irq_rx_enable);
EXPORT_SYMBOL(z_impl_uart_irq_rx_disable);
EXPORT_SYMBOL(z_impl_uart_irq_err_enable);
EXPORT_SYMBOL(z_impl_uart_irq_err_disable);
EXPORT_SYMBOL(z_impl_uart_irq_is_pending);
EXPORT_SYMBOL(z_impl_uart_irq_update);
EXPORT_SYMBOL(z_impl_uart_tx);
EXPORT_SYMBOL(z_impl_uart_tx_u16);
EXPORT_SYMBOL(z_impl_uart_tx_abort);
EXPORT_SYMBOL(z_impl_uart_rx_enable);
EXPORT_SYMBOL(z_impl_uart_rx_enable_u16);
EXPORT_SYMBOL(z_impl_uart_rx_disable);
EXPORT_SYMBOL(z_impl_uart_line_ctrl_set);
EXPORT_SYMBOL(z_impl_uart_line_ctrl_get);
EXPORT_SYMBOL(z_impl_uart_drv_cmd);
EXPORT_SYMBOL(z_impl_device_get_binding);
EXPORT_SYMBOL(z_impl_device_is_ready);
EXPORT_SYMBOL(z_impl_device_init);
EXPORT_SYMBOL(z_impl_k_thread_stack_alloc);
EXPORT_SYMBOL(z_impl_k_thread_stack_free);
EXPORT_SYMBOL(z_impl_k_thread_create);
EXPORT_SYMBOL(z_impl_k_thread_stack_space_get);
EXPORT_SYMBOL(z_impl_k_thread_join);
EXPORT_SYMBOL(z_impl_k_sleep);
EXPORT_SYMBOL(z_impl_k_usleep);
EXPORT_SYMBOL(z_impl_k_busy_wait);
EXPORT_SYMBOL(z_impl_k_yield);
EXPORT_SYMBOL(z_impl_k_wakeup);
EXPORT_SYMBOL(z_impl_k_sched_current_thread_query);
EXPORT_SYMBOL(z_impl_k_thread_abort);
EXPORT_SYMBOL(z_impl_k_thread_start);
EXPORT_SYMBOL(z_impl_k_thread_timeout_expires_ticks);
EXPORT_SYMBOL(z_impl_k_thread_timeout_remaining_ticks);
EXPORT_SYMBOL(z_impl_k_thread_priority_get);
EXPORT_SYMBOL(z_impl_k_thread_priority_set);
EXPORT_SYMBOL(z_impl_k_thread_deadline_set);
EXPORT_SYMBOL(z_impl_k_thread_suspend);
EXPORT_SYMBOL(z_impl_k_thread_resume);
EXPORT_SYMBOL(z_impl_k_is_preempt_thread);
EXPORT_SYMBOL(z_impl_k_thread_custom_data_set);
EXPORT_SYMBOL(z_impl_k_thread_custom_data_get);
EXPORT_SYMBOL(z_impl_k_thread_name_set);
EXPORT_SYMBOL(z_impl_k_thread_name_copy);
EXPORT_SYMBOL(z_impl_k_timer_start);
EXPORT_SYMBOL(z_impl_k_timer_stop);
EXPORT_SYMBOL(z_impl_k_timer_status_get);
EXPORT_SYMBOL(z_impl_k_timer_status_sync);
EXPORT_SYMBOL(z_impl_k_timer_expires_ticks);
EXPORT_SYMBOL(z_impl_k_timer_remaining_ticks);
EXPORT_SYMBOL(z_impl_k_timer_user_data_set);
EXPORT_SYMBOL(z_impl_k_timer_user_data_get);
EXPORT_SYMBOL(z_impl_k_uptime_ticks);
EXPORT_SYMBOL(z_impl_k_queue_init);
EXPORT_SYMBOL(z_impl_k_queue_cancel_wait);
EXPORT_SYMBOL(z_impl_k_queue_alloc_append);
EXPORT_SYMBOL(z_impl_k_queue_alloc_prepend);
EXPORT_SYMBOL(z_impl_k_queue_get);
EXPORT_SYMBOL(z_impl_k_queue_is_empty);
EXPORT_SYMBOL(z_impl_k_queue_peek_head);
EXPORT_SYMBOL(z_impl_k_queue_peek_tail);
EXPORT_SYMBOL(z_impl_k_futex_wait);
EXPORT_SYMBOL(z_impl_k_futex_wake);
EXPORT_SYMBOL(z_impl_k_event_init);
EXPORT_SYMBOL(z_impl_k_event_post);
EXPORT_SYMBOL(z_impl_k_event_set);
EXPORT_SYMBOL(z_impl_k_event_set_masked);
EXPORT_SYMBOL(z_impl_k_event_clear);
EXPORT_SYMBOL(z_impl_k_event_wait);
EXPORT_SYMBOL(z_impl_k_event_wait_all);
EXPORT_SYMBOL(z_impl_k_stack_alloc_init);
EXPORT_SYMBOL(z_impl_k_stack_push);
EXPORT_SYMBOL(z_impl_k_stack_pop);
EXPORT_SYMBOL(z_impl_k_mutex_init);
EXPORT_SYMBOL(z_impl_k_mutex_lock);
EXPORT_SYMBOL(z_impl_k_mutex_unlock);
EXPORT_SYMBOL(z_impl_k_condvar_init);
EXPORT_SYMBOL(z_impl_k_condvar_signal);
EXPORT_SYMBOL(z_impl_k_condvar_broadcast);
EXPORT_SYMBOL(z_impl_k_condvar_wait);
EXPORT_SYMBOL(z_impl_k_sem_init);
EXPORT_SYMBOL(z_impl_k_sem_take);
EXPORT_SYMBOL(z_impl_k_sem_give);
EXPORT_SYMBOL(z_impl_k_sem_reset);
EXPORT_SYMBOL(z_impl_k_sem_count_get);
EXPORT_SYMBOL(z_impl_k_msgq_alloc_init);
EXPORT_SYMBOL(z_impl_k_msgq_put);
EXPORT_SYMBOL(z_impl_k_msgq_get);
EXPORT_SYMBOL(z_impl_k_msgq_peek);
EXPORT_SYMBOL(z_impl_k_msgq_peek_at);
EXPORT_SYMBOL(z_impl_k_msgq_purge);
EXPORT_SYMBOL(z_impl_k_msgq_num_free_get);
EXPORT_SYMBOL(z_impl_k_msgq_get_attrs);
EXPORT_SYMBOL(z_impl_k_msgq_num_used_get);
EXPORT_SYMBOL(z_impl_k_pipe_alloc_init);
EXPORT_SYMBOL(z_impl_k_pipe_put);
EXPORT_SYMBOL(z_impl_k_pipe_get);
EXPORT_SYMBOL(z_impl_k_pipe_read_avail);
EXPORT_SYMBOL(z_impl_k_pipe_write_avail);
EXPORT_SYMBOL(z_impl_k_pipe_flush);
EXPORT_SYMBOL(z_impl_k_pipe_buffer_flush);
EXPORT_SYMBOL(z_impl_k_poll);
EXPORT_SYMBOL(z_impl_k_poll_signal_init);
EXPORT_SYMBOL(z_impl_k_poll_signal_reset);
EXPORT_SYMBOL(z_impl_k_poll_signal_check);
EXPORT_SYMBOL(z_impl_k_poll_signal_raise);
EXPORT_SYMBOL(z_impl_k_str_out);
EXPORT_SYMBOL(z_impl_k_float_disable);
EXPORT_SYMBOL(z_impl_k_float_enable);
EXPORT_SYMBOL(z_impl_k_object_access_grant);
EXPORT_SYMBOL(z_impl_k_object_release);
EXPORT_SYMBOL(z_impl_k_object_alloc);
EXPORT_SYMBOL(z_impl_k_object_alloc_size);
EXPORT_SYMBOL(z_impl_sys_clock_hw_cycles_per_sec_runtime_get);
