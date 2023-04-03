#include <stdint.h>
#include <stdbool.h>

typedef struct clock_s *clock_t;

typedef void (*clock_event_t)(clock_t clock, bool state);

clock_t clockCreate(uint16_t ticks_per_sercond, clock_event_t event_handler);

bool clockGetTime(clock_t clock, uint8_t *time, uint8_t size);

void clockSetUpTime(clock_t clock, uint8_t const *const time, uint8_t size);

void clockNewTick(clock_t clock);

void clockSetUpAlarm(clock_t clock, uint8_t const *const alarm, uint8_t size);

bool clockGetAlarm(clock_t clock, uint8_t *alarm, uint8_t size);

bool clockToggleAlarm(clock_t clock);