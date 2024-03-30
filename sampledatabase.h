#ifndef SAMPLEDATABASE_H
#define SAMPLEDATABASE_H

#include <QtNut/database.h>

class sampleTable;
class SampleDataBase : public NUT_WRAP_NAMESPACE(Database)
{
    Q_OBJECT
    NUT_DB_VERSION(9 12)
    NUT_DECLARE_TABLE(sampleTable, weapons)

public:
    SampleDataBase();
};

#endif // SAMPLEDATABASE_H
