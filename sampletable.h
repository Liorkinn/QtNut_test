#ifndef SAMPLETABLE_H
#define SAMPLETABLE_H

#include <QtNut/table.h>
#include <QString>

class sampleTable : public Nut::Table
{
    Q_OBJECT
   // Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)
   // Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

   // int m_id;

    QString m_name;

    // BEGIN OF NUT MACROS
    NUT_PRIMARY_AUTO_INCREMENT(id)

    NUT_DECLARE_FIELD(int, id, id, setId)
    NUT_FIELD(QString, name)

   // NUT_NOT_NULL(id)
   // NUT_NOT_NULL(name)

    //END OF NUT MACROS

public:
    explicit sampleTable(QObject *parent = nullptr);

   // int id() const;
    QString name() const;

public Q_SLOTS:
   // void setId(int id);
   // void setName(QString name);

Q_SIGNALS:
    //void idChanged(int id);
   // void nameChanged(QString name);
};

#endif // SAMPLETABLE_H
