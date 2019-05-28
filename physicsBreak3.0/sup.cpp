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
    addLabel(Lay, "<center><big><b>Главная справка</b></big></center>");
    addImage(Lay, ":/Res/1.jpg");
    return Lay;
}

QVBoxLayout *sRect1 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Торсионный маятник</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "«Торсионный маятник» - это механическая система, представляющая собой стержень на каждом конце которого закреплены грузики. "
                  "Стержень по центру закреплён на штифте. Стержень обладает лишь одной степенью свободы: "
                  "вращением вокруг оси при выведении из состояния равновесия за счёт возникновения возвращающего крутящего момента. ");
    addImage(Lay, ":/Sup/Math1/2.jpg");
    addLabel(Lay, "Движение маятника описывается основным уравнением динамики вращательного движения.");
    addImage(Lay, ":/Sup/Math3/2.png");
    addLabel(Lay, "Уравнение движения для угла отклонения φ свободно колеблющегося крутильного маятника, записывается следующим образом:");
    addImage(Lay, ":/Sup/Math1/1.jpg");
    return Lay;
}

QVBoxLayout *sRect2 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Моделирование прецессии и нутации гироскопа</b></big></center>");
    addLabel(Lay, "Данная виртуальная лаборатория была разработана для моделирования нутации и прецессии гироскопа. "
                  "С помощью этого программного обеспечения вы можете исследовать влияние различных параметров установки на нутацию и прецессию гироскопа. "
                  "Виртуальная лаборатория поможет облегчить проведение экспериментов с гироскопом, или даст возможность проведения опытов при отсутствии необходимого оборудования. Все физические процессы смоделированы без учёта трения.");
    addLabel(Lay, "<center><big><b>Описание установки</b></big></center>");
    addLabel(Lay, "Установка представляет собой подставку со стержнем, на конце которого закреплены ось и транспортир для измерения угла нутации. На оси слева закреплены 3 груза, а справа закреплён круглый диск с жердью, показывающей вращение диска.");
    addLabel(Lay, "<center><big><b>Описание интерфейса</b></big></center>");
    addLabel(Lay, "• В правой части окна расположен интерфейс программы, с помощью которого осуществляется основное взаимодействие с установкой.");
    addLabel(Lay, "• Правая часть окна разделена на три части. Первая часть вверху является управляющей панелью, с помощью которой можно управлять установкой, изменять её параметры, наблюдать нутацию и прецессию при установленных параметрах. "
                  "Вторая часть в середине – таймер для измерения времени эксперимента. Третья часть внизу – информация о названии, разработчиках, руководителе, городе и годе разработки виртуальной лаборатории.");
    addLabel(Lay, "<center><big><u>Кнопки в верхней части управляющей панели</u></big></center>");
    addLabel(Lay, "• С помощью кнопки «Пуск» запускается вращение диска. При нажатии на кнопку диск начнёт вращаться, при этом возникнут прецессия и нутация гироскопа. ");
    addLabel(Lay, "• При необходимости можно приостановить проведение эксперимента, нажав на кнопку «Пауза». Для продолжения эксперимента достаточно снова нажать на кнопку «Пуск».");
    addLabel(Lay, "• Можно полностью остановить проведение эксперимента, нажав на кнопку «Сброс». Установка и все её параметры вернутся в начальное состояние.");
    addLabel(Lay, "<center><big><u>Слайдеры в средней части управляющей панели</u></big></center>");
    addLabel(Lay, "• Под кнопками «Пуск», «Пауза» и «Сброс» расположены 6 различных слайдеров, с помощью которых можно взаимодействовать с установкой. Над каждым из слайдеров находится название параметра, за изменение которого он отвечает.");
    addLabel(Lay, "• Первый слайдер отвечает за изменение расстояния от диска до стержня. Значения расстояния варьируются в диапазоне от 0.15 до 0.2 м. При изменении значения можно наблюдать на установке, как диск перемещается по оси.");
    addLabel(Lay, "• Второй слайдер отвечает за изменение массы диска. Значения варьируются в диапазоне от 0.1 до 2 кг.");
    addLabel(Lay, "• Третий слайдер отвечает за изменение радиуса диска. Значения радиуса варьируются в диапазоне от 0.05 до 0.08 м. При изменении значения можно наблюдать на установке, как меняется радиус диска.");
    addLabel(Lay, "• Четвёртый слайдер отвечает за изменение угловой скорости диска. Значения скорости варьируются в диапазоне от 500 до 1000 рад/с. При изменении значения можно наблюдать на установке, как меняется угловая скорость вращения диска.");
    addLabel(Lay, "• Пятый слайдер отвечает за изменение угловой скорости прецессии. Значения скорости варьируются в диапазоне от -3 до 3 рад/с. При изменении значения можно наблюдать на установке, как меняется угловая скорость прецессии.");
    addLabel(Lay, "• Шестой слайдер отвечает за изменение угла отклонения оси от вертикального положения. Значения угла варьируются в диапазоне от 0.785 до 1.57 рад. При изменении значения можно наблюдать на установке, как меняется угол отклонения оси.");
    addLabel(Lay, "<center><big><u>Таймер</u></big></center>");
    addLabel(Lay, "• Для измерения времени можно использовать таймер. Таймер запускается кнопкой «Пуск». Время отображается в минутах, секундах и миллисекундах.");
    addLabel(Lay, "• При необходимости можно приостановить измерение времени, нажав на кнопку «Пауза», расположенную рядом с кнопкой «Пуск». Для продолжения измерения достаточно снова нажать на кнопку «Пуск».");
    addLabel(Lay, "• Можно полностью остановить измерение времени, нажав на кнопку «Сброс», расположенную рядом с кнопкой «Пауза». При нажатии на кнопку время обнулится.");
    addLabel(Lay, "<center><big><b>Графики</b></big></center>");
    addLabel(Lay, "• В разделе меню «Графики», можно увидеть графики зависимости угла наклона оси от угла прецессии и угла наклона оси от времени.");

    return Lay;
}


QVBoxLayout *sRect3 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Колебания жесткого математического маятника с большими амплитудами</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "Математический маятник — модель осциллятора, представляющая собой механическую систему, состоящую из материальной "
                  "точки на конце невесомого стержня и "
                  "находящуюся в однородном поле сил тяготения. \n\n В данном проекте реализуется модель математического маятника без учета силы трения в точке подвеса. "
                  "Данная модель позволяет моделировать колебания при любых (в том числе достаточно больших) углах отклонения от положения равновесия. ");
    addImage(Lay, ":/Sup/Math3/1.png");
    addLabel(Lay, "Движение маятника описывается основным уравнением динамики вращательного движения.");
    addImage(Lay, ":/Sup/Math3/2.png");
    addLabel(Lay, "На маятник действует момент силы:");
    addImage(Lay, ":/Sup/Math3/3.png");
    addLabel(Lay, "В проекции на Ох:");
    addImage(Lay, ":/Sup/Math3/4.png");
    addLabel(Lay, "(Момент силы М равен произведению составляющей силы тяжести F<sub>2</sub> на плечо ℓ)");
    addImage(Lay, ":/Sup/Math3/5.png");
    addLabel(Lay, "После подстановки значений формула имеет вид:");
    addImage(Lay, ":/Sup/Math3/6.png");
    addLabel(Lay, "Дифференциальное уравнение колебаний математического маятника без трения:");
    addImage(Lay, ":/Sup/Math3/7.png");
    addLabel(Lay, "Чтобы сделать модель маятника более точной и приближенной к реальным условиям, было учтено сопротивление среды. "
                  "В этом случае так же принимается во внимание размеры шарика, ранее рассматриваемого только в качестве материальной точки.");
    addImage(Lay, ":/Sup/Math3/8.png");
    addLabel(Lay, "Вектор силы сопротивления коллинеарен тангенциальной составляющей вектора скорости и ускорения движения маятника, при этом противоположен вектору скорости.");
    addLabel(Lay, "Величина силы сопротивления пропорциональна характерной площади S (для шара – площади поперечного сечения), плотности среды ρ и квадрату скорости V:");
    addImage(Lay, ":/Sup/Math3/9.png");
    addLabel(Lay, "C<sub>x</sub>— безразмерный аэродинамический коэффициент сопротивления, приблизительно равный 0.3 для шара");
    addLabel(Lay, "(https://ru.wikipedia.org/wiki/Лобовое_сопротивление)");
    addImage(Lay, ":/Sup/Math3/10.png");
    addLabel(Lay, "Тогда дифференциальное уравнение имеет вид:");
    addImage(Lay, ":/Sup/Math3/11.png");
    return Lay;
}

QVBoxLayout *sRect5 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Связанные физические маятники</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "Система состоит из двух физических маятников, расположенных на расстоянии l от точек подвеса, связанных между собой невесомой пружиной с коэффициентом жесткости k. "
                  "Пружина находится на расстоянии d от точек подвеса, расположенных на одной горизонтальной прямой. При движении маятников в одной вертикальной плоскости состояние "
                  "такой системы полностью описывается двумя независимыми параметрами: "
                  "углами  θ<sub>1</sub> и  θ<sub>2</sub> отклонения маятников от вертикали, т.е. система имеет две степени свободы.");
    addImage(Lay, ":/Sup/Math5/1.png");
    addLabel(Lay, "Уравнение движения для каждого маятника можно получить из общего уравнения динамики вращательного движения вокруг неподвижной оси:");
    addImage(Lay, ":/Sup/Math5/2.png");
    addLabel(Lay, "В отсутствии трения на первый маятник действует момент вращения создаваемый силой тяжести,");
    addImage(Lay, ":/Sup/Math5/3.png");
    addLabel(Lay, "и момент силы упругости:");
    addImage(Lay, ":/Sup/Math5/4.png");
    addLabel(Lay, "Поэтому уравнение движения первого маятника будет иметь вид:");
    addImage(Lay, ":/Sup/Math5/5.png");
    addLabel(Lay, "Аналогичная формула получается и для второго маятника."
                  "Таким образом, мы получили систему уравнений движения маятников:");
    addImage(Lay, ":/Sup/Math5/6.png");

    addLabel(Lay, "Для малых углов отклонения, сложив и вычитая уравнения, получим два независимых уравнения:");
    addImage(Lay, ":/Sup/Math5/7.png");
    addLabel(Lay, "В итоге, углы отклонения маятников можно найти в виде:");
    addImage(Lay, ":/Sup/Math5/8.png");

    addLabel(Lay, "Рассмотрим два случая, когда между маятниками не происходит обмен энергией:");
    addLabel(Lay, "<big><b>1 случай:</b></big>");
    addLabel(Lay, "Синфазные гармонические колебания: в начальный момент t=0 маятники были отклонены в одну сторону на одинаковый угол и имели одинаковые скорости"
                  "В этом случае пружина не деформируется, упругой силы и ее момента нет, оба маятника колеблются с одинаковой частотой:");
    addImage(Lay, ":/Sup/Math5/9.png");
    addLabel(Lay, "<big><b>2 случай:</b></big>");
    addLabel(Lay, "Противофазные гармонические колебания: в начальный момент t=0 маятники были отклонены в разные стороны на одинаковый угол и проекции скоростей были равны:");
    addImage(Lay, ":/Sup/Math5/10.png");
    addLabel(Lay, "В этом случае пружина максимально деформируется, производя дополнительную упругость в системе, маятники совершают колебания с частотой:");
    addImage(Lay, ":/Sup/Math5/11.png");

    addLabel(Lay, "Такие колебания называются нормальными модами колебаний (или нормальными колебаниями) системы связанных осцилляторов, а частоты ω<sub>1</sub>и ω<sub>2</sub> – нормальными частотами."
                  "Нормальная мода колебаний – это гармонические колебания, которые совершает каждый из связанных маятников при специальном выборе начальных условий. При любом другом"
                  "выборе начальных отклонений в каждом из маятников возникают сразу оба нормальных колебания, т.е. возникающие колебания представляют собой суперпозицию двух нормальных колебаний."
      "С течением времени энергия постепенно передается от одного маятника к другому, процесс обмена энергии повторяется, в результате чего возникают биения.");

    addLabel(Lay, "<big><b>Введем обозначения:</b></big>");
    addLabel(Lay, "Средняя частота колебаний маятника:");
    addImage(Lay, ":/Sup/Math5/13.png");
    addLabel(Lay, "Частота «модуляции» (медленное по сравнению с периодом колебаний изменение амплитуды, частоты или фазы колебаний по определённому закону):");
    addImage(Lay, ":/Sup/Math5/14.png");
    addLabel(Lay, "Полная энергия каждого из маятников равна соответственно:");
    addImage(Lay, ":/Sup/Math5/15.png");
    addLabel(Lay, "<big><b>Рассмотрим случай, когда в начальный момент t=0 отклонили лишь первый маятник, а второй находится в положении равновесия:</b></big>");
    addLabel(Lay, "Тогда отклонённый маятник начинает качаться вправо-влево и то тянет за собой, то толкает перед собой пружину, которая попеременно тянет и толкает другой маятник."
                  "Пружина мешает двигаться первому маятнику, но помогает второму, и таким образом обеспечивает передачу энергии от первого маятника ко второму. Как только первый маятник "
                  "потеряет всю энергию, процесс обмена энергии повторяется.");
    addLabel(Lay, "При максимальной амплитуде первый маятник обладает всей энергией системы, т.е. потенциальной энергией:");
    addImage(Lay, ":/Sup/Math5/12.png");

    addLabel(Lay, "<big><b>Авторы проекта:</b></big>");
    addLabel(Lay, "Голованова Дарья, ПМ-72");
    addLabel(Lay, "Столярова Лилия, ПМ-73");
    addLabel(Lay, "Терлеев Андрей, ПМ-72");

    return Lay;
}

QVBoxLayout *sRect7 ()
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
    addImage(Lay, ":/Sup/Math7/1.jpg");
    addImage(Lay, ":/Sup/Math7/2.jpg");
    addLabel(Lay, "\n");
    addLabel(Lay, "Пусть h - высота препятствия, необходимо рассмотреть два случая:\n"
                  "1) |l-h| - очень маленькая величина, т.е. препятствие расположено близко к креплению нити,"
                  " тогда система будет из себя математический маятник, траектория движения груза:");
    addImage(Lay, ":/Sup/Math7/3.jpg");
    addImage(Lay, ":/Sup/Math7/4.jpg");
    addLabel(Lay, "Для вывода дифференциального уравнения колебания математического маятника воспользуемся дифференциальным уравнением колебания физического маятника:");
    addImage(Lay, ":/Sup/Math7/4.1.jpg");
    addImage(Lay, ":/Sup/Math7/5.jpg");
    addImage(Lay, ":/Sup/Math7/6.jpg");
    addLabel(Lay, "\n\n");
    addImage(Lay, ":/Sup/Math7/7.jpg");
    addLabel(Lay, "Так как маятник Галилея представляет собой совокупность двух математических маятников с разными характеристиками,"
                  " то для вычисления собственной частоты до препятствия формула останется без изменения,"
                  " после препятствия длина нити меняется, соответственно формула примет вид:");
    addImage(Lay, ":/Sup/Math7/8.jpg");
    addImage(Lay, ":/Sup/Math7/9.jpg");
    addImage(Lay, ":/Sup/Math7/10.jpg");
    addImage(Lay, ":/Sup/Math7/11.jpg");
    return Lay;
}
