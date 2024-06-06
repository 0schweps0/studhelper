#include <QtTest>
#include "GlobalConstants.h"

class TestGlobalConstants : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();    // Выполняется перед началом всех тестов
    void cleanupTestCase(); // Выполняется после завершения всех тестов
    void init();            // Выполняется перед каждым тестом
    void cleanup();         // Выполняется после каждого теста

    void testSetName();
    void testSetSecondName();
    void testSetGroup();
};

void TestGlobalConstants::initTestCase()
{
    // Инициализация перед всеми тестами
}

void TestGlobalConstants::cleanupTestCase()
{
    // Очистка после всех тестов
}

void TestGlobalConstants::init()
{
    // Инициализация перед каждым тестом
}

void TestGlobalConstants::cleanup()
{
    // Очистка после каждого теста
    setName("");
    setSecondName("");
    setGroup("");
}

void TestGlobalConstants::testSetName()
{
    QString testName = "Игорь";
    setName(testName);
    QCOMPARE(getName(), testName);
}

void TestGlobalConstants::testSetSecondName()
{
    QString testSecondName = "Попов";
    setSecondName(testSecondName);
    QCOMPARE(getSecondName(), testSecondName);
}

void TestGlobalConstants::testSetGroup()
{
    QString testGroup = "233";
    setGroup(testGroup);
    QCOMPARE(getGroup(), testGroup);
}

QTEST_MAIN(TestGlobalConstants)
#include "globalconstants_tests.moc"
