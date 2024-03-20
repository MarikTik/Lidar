#pragma once
#include <boost/asio/io_context.hpp>


template<typename InterfaceImpl>
class AsyncInterface{
public:
     AsyncInterface(boost::asio::io_context& io_context)
          : _io_context(io_context){
           
     }
     void async_read(){
          static_cast<InterfaceImpl*>(this)->async_read();
     }
     void async_scan(){
          static_cast<InterfaceImpl*>(this)->async_scan();
     }
protected:
     boost::asio::io_context _io_context;
};
