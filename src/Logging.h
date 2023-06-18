#pragma once
#include <spdlog/spdlog.h>

#ifdef DEBUG
    #define LOG_DEBUG(...) SPDLOG_DEBUG(__VA_ARGS__)
#else
    #define LOG_DEBUG(...)
#endif
#define LOG_INFO(...) SPDLOG_INFO(__VA_ARGS__)
#define LOG_WARN(...) SPDLOG_WARN(__VA_ARGS__)
#define LOG_ERROR(...) SPDLOG_ERROR(__VA_ARGS__)