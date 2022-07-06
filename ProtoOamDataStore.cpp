#include "ProtoOamDataStore.h"

std::shared_ptr<int> ProtoOamDataStore::getXmlReader() // TODO: should be changed to weak pointer?
{
    return m_ptrXmlReader;
}