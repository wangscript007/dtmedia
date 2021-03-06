#pragma once
#include <functional>
#include <string>
#include "message.h"

class CallBack
{
public:
  CallBack() {}
  virtual void operator()(const dt::OpenRealStreamResp& resp) = 0;

protected:
  std::function<void(bool)> func;
};

//template <typename F>
