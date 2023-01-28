#include "MahjongResourceFactory.h"

MahjongResourceFactory::MahjongResourceFactory()
{
    resource_ = make_shared<Resource>();
    resource_->set_path(
        ""
        ""
        ""
    );
    resource_->set_method_handler("GET", 
    [&](const shared_ptr<Session> session)
    {
        get_handler(session);
    });
}

void MahjongResourceFactory::get_handler(const shared_ptr<Session> session)
{

}


shared_ptr<Resource> MahjongResourceFactory::get_resource() const
{
    return resource_;
}