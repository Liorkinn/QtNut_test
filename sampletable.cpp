#include "sampletable.h"

sampleTable::sampleTable(QObject *parent) : Nut::Table(parent)
{
   // init();
}

//int sampleTable::id() const
//{
//    return m_id;
//}

QString sampleTable::name() const
{
    return m_name;
}

//void sampleTable::setId(int id)
//{
//    if (m_id == id)
//        return;

//    m_id = id;
//    Q_EMIT idChanged(m_id);
//}

//void sampleTable::setName(QString name)
//{
//    if (m_name == name)
//        return;

//    m_name = name;
//    Q_EMIT nameChanged(m_name);
//}
