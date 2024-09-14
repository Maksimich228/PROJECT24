#include <gmock/gmock.h>

class MockDBConnection : public DBConnection {
public:
    MOCK_METHOD(void, open, (), (override));
    MOCK_METHOD(void, close, (), (override));
    MOCK_METHOD(void, execQuery, (const std::string& query), (override));
};