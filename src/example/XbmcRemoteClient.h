/**
 * THIS FILE IS GENERATED BY jsonrpcstub, DO NOT CHANGE IT!!!!!
 */

#ifndef _XBMCREMOTECLIENT_H_
#define _XBMCREMOTECLIENT_H_

#include <jsonrpc/rpc.h>

class XbmcRemoteClient
{
    public:
        XbmcRemoteClient(jsonrpc::AbstractClientConnector* conn)
        {
            this->client = new jsonrpc::Client(conn);
        }
        ~XbmcRemoteClient()
        {
            delete this->client;
        }

        std::string Input_Back() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::arrayValue;
            return this->client->CallMethod("Input.Back",p).asString();
        }

        std::string Input_Down() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::arrayValue;
            return this->client->CallMethod("Input.Down",p).asString();
        }

        std::string Input_Left() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::arrayValue;
            return this->client->CallMethod("Input.Left",p).asString();
        }

        std::string Input_Right() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::arrayValue;
            return this->client->CallMethod("Input.Right",p).asString();
        }

        std::string Input_Select() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::arrayValue;
            return this->client->CallMethod("Input.Select",p).asString();
        }

        std::string Input_Up() throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p = Json::arrayValue;
            return this->client->CallMethod("Input.Up",p).asString();
        }

    private:
        jsonrpc::Client* client;
};
#endif //_XBMCREMOTECLIENT_H_
