#include "sampletable.h"

sampleTable::sampleTable(QObject *parent) : Nut::Table(parent)
{
    init();
}

int sampleTable::id() const
{
    return m_id;
}

QString sampleTable::type_weapon() const
{
    return m_type_weapon;
}

void sampleTable::setId(int id)
{
    if (m_id == id)
        return;

    m_id = id;
    Q_EMIT idChanged(m_id);
}

void sampleTable::setType_weapon(QString type_weapon)
{
    if (m_type_weapon == type_weapon)
        return;

    m_type_weapon = type_weapon;
    Q_EMIT typeWeaponChanged(m_type_weapon);
}
