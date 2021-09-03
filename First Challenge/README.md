
In this challenge, We are going to take advantage of a vulnerability of a networking application. Sometimes, it is the applications themselves (sitting on top of the network) that are exploited.

The source code of the application is available in application_code.c

As we can see, the application looks very simple and benign at first sight. 

Our goal is to analyze the source code, find why the application is vulnerable and how this can be exploited. We are deliberately left in the wild!

Alongside this application, imagine there is a web server running at the port 80 of a VM which you can display it in your browser by typing 192.168.56.101, when the VM is running. The final goal of the challenge is to exploit the application so as to put your name on the list of winners.

## **Solution** : *Running a Buffer Overflow Attack*
