#include "tkc/mem.h"
#include "tkc/mutex.h"

struct _tk_mutex_t {
  uint32_t none;
};

static tk_mutex_t s_tk_mutex_null;

tk_mutex_t* tk_mutex_create() {
  return &s_tk_mutex_null;
}

ret_t tk_mutex_lock(tk_mutex_t* mutex) {
  (void)mutex;
  return RET_OK;
}

ret_t tk_mutex_unlock(tk_mutex_t* mutex) {
  (void)mutex;
  return RET_OK;
}

ret_t tk_mutex_destroy(tk_mutex_t* mutex) {
  (void)mutex;
  return RET_OK;
}
