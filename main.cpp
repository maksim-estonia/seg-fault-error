#include "ProtoOamDataStore.h"

int main(int argc, char const *argv[])
{
    /* code */
    std::weak_ptr<ProtoOamDataStore> m_ptrOamDataStore; ///< pointer to OamDataStore
    auto ptrOamDataStore = m_ptrOamDataStore.lock();
    auto ptrXmlReader = ptrOamDataStore->getXmlReader();
    return 0;
}
