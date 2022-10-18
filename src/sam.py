import sys
from PyQt5.QtWidgets import QApplication, QWidget, QMainWindow

from PyQt5.QtWidgets import QVBoxLayout, QLabel
from PyQt5.QtGui import QFont, QPixmap
from PyQt5.QtCore import QTimer, QTime, Qt
  
  
class Window(QMainWindow):
  
    def __init__(self, parent=None):
        super().__init__(parent)

        self.init_clock()
  
        # setting geometry of main window
        self.setGeometry(100, 100, 800, 400)
        self.setWindowTitle("Peritia")
        self.setObjectName('MainWindow')
        stylesheet = '''
        #MainWindow {
        image: url(vine.png);
        background-repeat: no-repeat;
        background-position: center
        }
        '''
        self.setStyleSheet(stylesheet)
      #  layout = QVBoxLayout()
      #  self.qw = QWidget()





       # self.label.setAlignment(Qt.AlignRight)
        #layout.addWidget(self.label)
       # self.centralWidget = QLabel("Hello, World")
       # self.centralWidget.setAlignment(Qt.AlignHCenter | Qt.AlignVCenter)
     #   self.setCentralWidget(self.centralWidget)

  
        # creating a vertical layout
       # layout = QVBoxLayout()
  
        # creating font object
       # font = QFont('Arial', 20, QFont.Bold)
  
        # creating a label object
      #  self.label = QLabel()
       # pixmap = QPixmap('blake.jpg')
       # self.label.setPixmap(pixmap)
  
        # setting centre alignment to the label
        #self.label.setAlignment(Qt.AlignRight)
  
        # setting font to the label
      #  self.label.setFont(font)
  
        # adding label to the layout
        #layout.addWidget(self.label)
  
        # setting the layout to main window
        #self.setLayout(layout)
  
        # creating a timer object
      #  timer = QTimer(self)
  
        # adding action to timer
      #  timer.timeout.connect(self.showTime)
  
        # update the timer every second
       # timer.start(1000)


    def init_clock(self):
        self.qw = QWidget()
        self.layout = QVBoxLayout()
        self.lbl = QLabel("ddd")
        

        self.lbl.setAlignment(Qt.AlignRight)
        self.layout.addWidget(self.lbl)
        self.setLayout(self.layout)


  
    # method called by timer
   # def showTime(self):
  
        # getting current time
     #   current_time = QTime.currentTime()
  
        # converting QTime object to string
       # label_time = current_time.toString('hh:mm:ss')
  
        # showing it to the label
      #  self.lbl.setText(label_time)
  
  
# create pyqt5 app
App = QApplication(sys.argv)
  
# create the instance of our Window
window = Window()
  
# showing all the widgets
window.show()
  
# start the app
App.exit(App.exec_())
