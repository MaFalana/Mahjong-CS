#pragma once

#include "IResourceFactory.h"

class MahjongResourceFactory: public IResourceFactory
{
    public:

        MahjongResourceFactory();
        shared_ptr<Resource> get_resource() const final;

    private:
        void get_handler(const shared_ptr<Session> session);
        shared_ptr<Resource> resource_;
};