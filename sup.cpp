#include "help.h"
void addLabel(QVBoxLayout *L, QString s)
{
    QLabel* lab = new QLabel(s);
    lab->setWordWrap(true);
    lab->setAlignment(Qt::AlignJustify);
    QFont f("Times New Roman", 11);
    lab->setFont(f);
    L->addWidget(lab);
}
void addImage(QVBoxLayout *L, QString s, bool transform = false)
{
    QPixmap im(s);
    QLabel* lab = new QLabel();
    if (transform)
        lab->setScaledContents(true);
    lab->setPixmap(im);
    L->addWidget(lab);
}

QVBoxLayout *sRect ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Маятник Галилея</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "Маятник Галилея – математический маятник, у которого движение груза представимо в виде двух состояний – до и после прохождения «препятствия»."
                  "Препятствие представляет собой тонкий стержень, расположенный перпендикулярно движению нити.\n\n"
                  "До столкновения с препятствием система представляет собой обычный математический маятник, после – тот же маятник, но с измененными характеристиками, будем называть его «деформированный маятник».  "
                  "При этом максимальная высота поднятия груза до и после препятствия не отличается.\n\n"
                  "Математический маятник – это осциллятор, представляющий собой систему из груза массой m на конце нерастяжимой нити.\n\n"
                  "На рисунке представлены возможные траектории движения груза:\n\n");
    addImage(Lay, ":/Sup/Math/1.jpg");
    addImage(Lay, ":/Sup/Math/2.jpg");
    addLabel(Lay, "\n");
    addLabel(Lay, "Пусть h - высота препятствия, необходимо рассмотреть два случая:\n"
                  "1) |l-h| - очень маленькая величина, т.е. препятствие расположено близко к креплению нити,"
                  " тогда система будет из себя математический маятник, траектория движения груза:");
    addImage(Lay, ":/Sup/Math/3.jpg");
    addImage(Lay, ":/Sup/Math/4.jpg");
    addLabel(Lay, "Для вывода дифференциального уравнения колебания математического маятника воспользуемся дифференциальным уравнением колебания физического маятника:");
    addImage(Lay, ":/Sup/Math/4.1.jpg");
    addImage(Lay, ":/Sup/Math/5.jpg");
    addImage(Lay, ":/Sup/Math/6.jpg");
    addLabel(Lay, "\n\n");
    addImage(Lay, ":/Sup/Math/7.jpg");
    addLabel(Lay, "Так как маятник Галилея представляет собой совокупность двух математических маятников с разными характеристиками,"
                  " то для вычисления собственной частоты до препятствия формула останется без изменения,"
                  " после препятствия длина нити меняется, соответственно формула примет вид:");
    addImage(Lay, ":/Sup/Math/8.jpg");
    addImage(Lay, ":/Sup/Math/9.jpg");
    addImage(Lay, ":/Sup/Math/10.jpg");
    addImage(Lay, ":/Sup/Math/11.jpg");
    return Lay;
}


