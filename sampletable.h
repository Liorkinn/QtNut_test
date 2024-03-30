#ifndef SAMPLETABLE_H
#define SAMPLETABLE_H

#include <QtNut/table.h>
#include <QString>

class sampleTable : public Nut::Table
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString type_weapon READ type_weapon WRITE setType_weapon NOTIFY typeWeaponChanged)

    int m_id;
    QString m_type_weapon;

    // BEGIN OF NUT MACROS
    NUT_PRIMARY_KEY(id)
    NUT_FIELD(int, id)
    NUT_FIELD(QString, type_weapon)
    NUT_FIELD(QString, name_short)
    NUT_FIELD(QString, name_full)
    NUT_NOT_NULL(id)
    //END OF NUT MACROS

public:
    explicit sampleTable(QObject *parent = nullptr);
    int id() const;
    QString type_weapon() const;

public Q_SLOTS:
    void setId(int id);
    void setType_weapon(QString name);

Q_SIGNALS:
    void idChanged(int id);
    void typeWeaponChanged(QString name);
};

#endif // SAMPLETABLE_H
