#pragma once

#define LOG_ET(fmt, ...)  log_time("\x1B[31m",  fmt, ## __VA_ARGS__)
#define LOG_WT(fmt, ...)  log_time("\x1B[33m",  fmt, ## __VA_ARGS__)
#define LOG_IT(fmt, ...)  log_time("\x1B[32m",  fmt, ## __VA_ARGS__)
#define LOG_DT(fmt, ...)  log_time("\x1B[37m",  fmt, ## __VA_ARGS__)

#define LOG_E(fmt, ...)   log_base("\x1B[31m",  fmt, ## __VA_ARGS__)
#define LOG_W(fmt, ...)		log_base("\x1B[33m",  fmt, ## __VA_ARGS__)
#define LOG_I(fmt, ...)		log_base("\x1B[32m",  fmt, ## __VA_ARGS__)
#define LOG_D(fmt, ...)		log_base("\x1B[37m",  fmt, ## __VA_ARGS__)


int log_base(const char* col,const char* fmt,...);
int log_time(const char* col,const char* fmt,...);
void LOG_HEX(void* addr, int len);
