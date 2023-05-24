import QtQuick 2.2
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 800
    height: 400
    title: "Hesap Makinesi"

    Rectangle {
        width: parent.width
        height: parent.height

        Row {
            anchors.centerIn: parent

            Grid {
                columns: 4
                spacing: 10

                Button {
                    text: "7"
                    onClicked: {
                        inputField.text += "7"
                    }
                }

                Button {
                    text: "8"
                    onClicked: {
                        inputField.text += "8"
                    }
                }

                Button {
                    text: "9"
                    onClicked: {
                        inputField.text += "9"
                    }
                }

                Button {
                    text: "/"
                    onClicked: {
                        inputField.text += "/"
                    }
                }

                Button {
                    text: "4"
                    onClicked: {
                        inputField.text += "4"
                    }
                }

                Button {
                    text: "5"
                    onClicked: {
                        inputField.text += "5"
                    }
                }

                Button {
                    text: "6"
                    onClicked: {
                        inputField.text += "6"
                    }
                }

                Button {
                    text: "*"
                    onClicked: {
                        inputField.text += "*"
                    }
                }

                Button {
                    text: "1"
                    onClicked: {
                        inputField.text += "1"
                    }
                }

                Button {
                    text: "2"
                    onClicked: {
                        inputField.text += "2"
                    }
                }

                Button {
                    text: "3"
                    onClicked: {
                        inputField.text += "3"
                    }
                }

                Button {
                    text: "-"
                    onClicked: {
                        inputField.text += "-"
                    }
                }

                Button {
                    text: "0"
                    onClicked: {
                        inputField.text += "0"
                    }
                }

                Button {
                    text: "."
                    onClicked: {
                        inputField.text += "."
                    }
                }

                Button {
                    text: "="
                    onClicked: {
                        try {
                            inputField.text = eval(inputField.text)
                        } catch (e) {
                            inputField.text = "Hatalı İfade"
                        }
                    }
                }

                Button {
                    text: "+"
                    onClicked: {
                        inputField.text += "+"
                    }
                }

                Button {
                    text: "C"
                    onClicked: {
                        inputField.text = ""
                    }
                }
            }

            TextField {
                id: inputField
                width: 300
                height: 40
            }
        }
    }
}
