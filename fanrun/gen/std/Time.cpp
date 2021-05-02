#include "std.h"



std_DateTime std_DateTime_now(fr_Env __env, std_Duration_null tolerance) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
std_DateTime std_DateTime_nowUtc(fr_Env __env, std_Duration_null tolerance) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
std_DateTime std_DateTime_fromTicks(fr_Env __env, sys_Int ticks, std_TimeZone tz) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
std_DateTime std_DateTime_make(fr_Env __env, sys_Int year, std_Month month, sys_Int day, sys_Int hour, sys_Int min, sys_Int sec, sys_Int ns, std_TimeZone tz) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
sys_Int std_DateTime_dayOfYear(fr_Env __env, std_DateTime_ref __self) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
sys_Int std_DateTime_weekOfYear(fr_Env __env, std_DateTime_ref __self, std_Weekday startOfWeek) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
sys_Int std_DateTime_hoursInDay(fr_Env __env, std_DateTime_ref __self) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
sys_Str std_DateTime_toLocale(fr_Env __env, std_DateTime_ref __self, sys_Str_null pattern, std_Locale locale) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
std_DateTime_null std_DateTime_fromLocale(fr_Env __env, sys_Str str, sys_Str pattern, std_TimeZone_null tz, sys_Bool checked) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
sys_Int std_DateTime_weekdayInMonth(fr_Env __env, sys_Int year, std_Month mon, std_Weekday weekday, sys_Int pos) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }


std_Locale std_Locale_cur(fr_Env __env) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
void std_Locale_setCur(fr_Env __env, std_Locale locale) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); }



sys_Int std_TimePoint_nowMillis(fr_Env __env) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
sys_Int std_TimePoint_nanoTicks(fr_Env __env) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
sys_Int std_TimePoint_nowUnique(fr_Env __env) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }

sys_List std_TimeZone_listFullNames(fr_Env __env) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
std_TimeZone_null std_TimeZone_fromName(fr_Env __env, sys_Str name) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
std_TimeZone std_TimeZone_cur(fr_Env __env) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }
std_Duration_null std_TimeZone_dstOffset(fr_Env __env, std_TimeZone_ref __self, sys_Int year) { FR_SET_ERROR_ALLOC(sys_UnsupportedErr); return 0; }

