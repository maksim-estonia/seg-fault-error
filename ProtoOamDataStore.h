#include <memory>

class ProtoOamDataStore : public std::enable_shared_from_this<ProtoOamDataStore>
{
    public:
        virtual std::shared_ptr<int> getXmlReader();
    private:
        std::shared_ptr<int> m_ptrXmlReader;  ///< pointer to XmlReader
};
