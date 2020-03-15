#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class ArrayTemplateTest : public QObject
{
    Q_OBJECT

public:
    ArrayTemplateTest();
    ~ArrayTemplateTest();

private slots:
    void test_case1();

};

ArrayTemplateTest::ArrayTemplateTest()
{

}

ArrayTemplateTest::~ArrayTemplateTest()
{

}

void ArrayTemplateTest::test_case1()
{

}

QTEST_MAIN(ArrayTemplateTest)

#include "tst_arraytemplatetest.moc"
