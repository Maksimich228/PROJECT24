#pragma once
class ClassThatusesDB
{
public:
    ClassThatUsesDB(DBConnection& dbConnection) : dbConnection(dbConnection) {}

    void openConnection() {
        dbConnection.open();
    }

    void useConnection(const std::string& query) {
        dbConnection.execQuery(query);
    }

    void closeConnection() {
        dbConnection.close();
    }

private:
    DBConnection& dbConnection;
};


