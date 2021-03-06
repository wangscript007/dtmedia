#ifndef __MEIDA_H__
#define __MEIDA_H__
#include <memory>
#include "message.h"
//#include <functional>
//#include <string>
//#include "stream.h"
#include "callback.h"
#include <map>

//template <typename F, typename... Args>


class Meida
{
public:
  Meida();
  ~Meida();
   static Meida *getInstance();

  bool openStream( const dt::OpenRealStreamParam& param, std::shared_ptr<CallBack>);
  bool closeStream(std::string callid);
private:
  static Meida *instance_;
  std::map<std::string, std::shared_ptr<CallBack>> cbmap_;
};
#endif