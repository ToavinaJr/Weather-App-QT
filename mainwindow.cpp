#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->populateComboCountry();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getCountryList()
{
    this->countryListWithCode = {
        "AF - Afghanistan",
        "AL - Albania",
        "DZ - Algeria",
        "AS - American Samoa",
        "AD - Andorra",
        "AO - Angola",
        "AI - Anguilla",
        "AQ - Antarctica",
        "AG - Antigua and Barbuda",
        "AR - Argentina",
        "AM - Armenia",
        "AW - Aruba",
        "AU - Australia",
        "AT - Austria",
        "AZ - Azerbaijan",
        "BS - Bahamas",
        "BH - Bahrain",
        "BD - Bangladesh",
        "BB - Barbados",
        "BY - Belarus",
        "BE - Belgium",
        "BZ - Belize",
        "BJ - Benin",
        "BM - Bermuda",
        "BT - Bhutan",
        "BO - Bolivia",
        "BA - Bosnia and Herzegovina",
        "BW - Botswana",
        "BR - Brazil",
        "IO - British Indian Ocean Territory",
        "BN - Brunei",
        "BG - Bulgaria",
        "BF - Burkina Faso",
        "BI - Burundi",
        "CV - Cabo Verde",
        "KH - Cambodia",
        "CM - Cameroon",
        "CA - Canada",
        "KY - Cayman Islands",
        "CF - Central African Republic",
        "TD - Chad",
        "CL - Chile",
        "CN - China",
        "CO - Colombia",
        "KM - Comoros",
        "CG - Congo (Brazzaville)",
        "CD - Congo (Kinshasa)",
        "CR - Costa Rica",
        "CI - Côte d'Ivoire",
        "HR - Croatia",
        "CU - Cuba",
        "CW - Curaçao",
        "CY - Cyprus",
        "CZ - Czechia",
        "DK - Denmark",
        "DJ - Djibouti",
        "DM - Dominica",
        "DO - Dominican Republic",
        "EC - Ecuador",
        "EG - Egypt",
        "SV - El Salvador",
        "GQ - Equatorial Guinea",
        "ER - Eritrea",
        "EE - Estonia",
        "SZ - Eswatini",
        "ET - Ethiopia",
        "FJ - Fiji",
        "FI - Finland",
        "FR - France",
        "GF - French Guiana",
        "PF - French Polynesia",
        "GA - Gabon",
        "GM - Gambia",
        "GE - Georgia",
        "DE - Germany",
        "GH - Ghana",
        "GI - Gibraltar",
        "GR - Greece",
        "GL - Greenland",
        "GD - Grenada",
        "GP - Guadeloupe",
        "GU - Guam",
        "GT - Guatemala",
        "GN - Guinea",
        "GW - Guinea-Bissau",
        "GY - Guyana",
        "HT - Haiti",
        "HN - Honduras",
        "HU - Hungary",
        "IS - Iceland",
        "IN - India",
        "ID - Indonesia",
        "IR - Iran",
        "IQ - Iraq",
        "IE - Ireland",
        "IL - Israel",
        "IT - Italy",
        "JM - Jamaica",
        "JP - Japan",
        "JO - Jordan",
        "KZ - Kazakhstan",
        "KE - Kenya",
        "KI - Kiribati",
        "KP - Korea (North)",
        "KR - Korea (South)",
        "KW - Kuwait",
        "KG - Kyrgyzstan",
        "LA - Laos",
        "LV - Latvia",
        "LB - Lebanon",
        "LS - Lesotho",
        "LR - Liberia",
        "LY - Libya",
        "LI - Liechtenstein",
        "LT - Lithuania",
        "LU - Luxembourg",
        "MG - Madagascar",
        "MW - Malawi",
        "MY - Malaysia",
        "MV - Maldives",
        "ML - Mali",
        "MT - Malta",
        "MH - Marshall Islands",
        "MQ - Martinique",
        "MR - Mauritania",
        "MU - Mauritius",
        "MX - Mexico",
        "FM - Micronesia",
        "MD - Moldova",
        "MC - Monaco",
        "MN - Mongolia",
        "ME - Montenegro",
        "MS - Montserrat",
        "MA - Morocco",
        "MZ - Mozambique",
        "MM - Myanmar (Burma)",
        "NA - Namibia",
        "NR - Nauru",
        "NP - Nepal",
        "NL - Netherlands",
        "NC - New Caledonia",
        "NZ - New Zealand",
        "NI - Nicaragua",
        "NE - Niger",
        "NG - Nigeria",
        "NU - Niue",
        "NF - Norfolk Island",
        "MK - North Macedonia",
        "NO - Norway",
        "OM - Oman",
        "PK - Pakistan",
        "PW - Palau",
        "PS - Palestine",
        "PA - Panama",
        "PG - Papua New Guinea",
        "PY - Paraguay",
        "PE - Peru",
        "PH - Philippines",
        "PL - Poland",
        "PT - Portugal",
        "PR - Puerto Rico",
        "QA - Qatar",
        "RO - Romania",
        "RU - Russia",
        "RW - Rwanda",
        "KN - Saint Kitts and Nevis",
        "LC - Saint Lucia",
        "VC - Saint Vincent and the Grenadines",
        "WS - Samoa",
        "SM - San Marino",
        "ST - Sao Tome and Principe",
        "SA - Saudi Arabia",
        "SN - Senegal",
        "RS - Serbia",
        "SC - Seychelles",
        "SL - Sierra Leone",
        "SG - Singapore",
        "SX - Sint Maarten",
        "SK - Slovakia",
        "SI - Slovenia",
        "SB - Solomon Islands",
        "SO - Somalia",
        "ZA - South Africa",
        "SS - South Sudan",
        "ES - Spain",
        "LK - Sri Lanka",
        "SD - Sudan",
        "SR - Suriname",
        "SE - Sweden",
        "CH - Switzerland",
        "SY - Syria",
        "TW - Taiwan",
        "TJ - Tajikistan",
        "TZ - Tanzania",
        "TH - Thailand",
        "TL - Timor-Leste",
        "TG - Togo",
        "TO - Tonga",
        "TT - Trinidad and Tobago",
        "TN - Tunisia",
        "TR - Turkey",
        "TM - Turkmenistan",
        "TV - Tuvalu",
        "UG - Uganda",
        "UA - Ukraine",
        "AE - United Arab Emirates",
        "GB - United Kingdom",
        "US - United States",
        "UY - Uruguay",
        "UZ - Uzbekistan",
        "VU - Vanuatu",
        "VE - Venezuela",
        "VN - Vietnam",
        "YE - Yemen",
        "ZM - Zambia",
        "ZW - Zimbabwe"
    };

}

void MainWindow::populateComboCountry()
{
    this->getCountryList();
    ui->comboCountry->addItems(countryListWithCode);
}

bool MainWindow::on_btn_go_clicked()
{
    QString countryCode, zipCode, apiKey;

    apiKey = "2758e9bd324ae12a7a472af383580f4f";
    countryCode = ui->comboCountry->currentText().split("-")[0].trimmed();
    zipCode = ui->textZipCode->text();

    QString url = QString("https://api.openweathermap.org/data/2.5/weather?zip=%1,%2&appid=%3")
                      .arg(zipCode)
                      .arg(countryCode)
                      .arg(apiKey);

    qDebug() << url ;

    // INitailisation de l'acces à la connexion
    netManager = new QNetworkAccessManager(this);

    if (netManager == nullptr) {
        qDebug() << "Erreur avec QNetWorkAccessMAnager" ;
    }

    QNetworkRequest request( (QUrl(url) ));

    reply = netManager->get(request);

    // Connecter la répônse avec le slot de fin de connexion
    connect(reply, &QNetworkReply::finished, this, &MainWindow::onWeatherDataReceived);

    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "Network No Error : " << reply->errorString();
        return false;
    }

    return true;
}

void MainWindow::onWeatherDataReceived()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());

    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QString jsonString = jsonDoc.toJson(QJsonDocument::Indented);
        qDebug() << jsonString;

        ui->labelJSonText->setText(jsonString);
    }
    else
    {
        qDebug() << "Erreur : " << reply->error();
    }

    reply->deleteLater();
}
