#include <retesteth/configs/Options.h>
#include <string>
using namespace std;
using namespace dataobject;

const string default_Istanbul_config = R"({
    "params" : {
        "homesteadForkBlock" : "0x00",
        "EIP150ForkBlock" : "0x00",
        "EIP158ForkBlock" : "0x00",
        "byzantiumForkBlock" : "0x00",
        "constantinopleForkBlock" : "0x00",
        "constantinopleFixForkBlock" : "0x00",
        "istanbulForkBlock" : "0x00",
        "chainID" : "0x01"
    },
    "accounts" : {
    }
})";

const string t8ntool_Istanbul_config = R"({
    "params" : {
        "fork" : "Istanbul",
        "constantinopleForkBlock" : "0x00",
        "byzantiumForkBlock" : "0x00",
        "homesteadForkBlock" : "0x00"
    },
    "accounts" : {
    }
})";

genIstanbulCfg::genIstanbulCfg()
{
    spDataObject obj(new DataObject());
    (*obj)["path"] = "besu/genesis/Istanbul.json";
    (*obj)["content"] = default_Istanbul_config;
    map_configs.addArrayObject(obj);

    spDataObject obj2(new DataObject());
    (*obj2)["path"] = "default/genesis/Istanbul.json";
    (*obj2)["content"] = t8ntool_Istanbul_config;
    map_configs.addArrayObject(obj2);
}
