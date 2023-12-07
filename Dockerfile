FROM debian:buster

RUN apt-get update
RUN apt-get install build-essential make cmake wget autogen autoconf automake -y
RUN cd && wget https://github.com/steward-fu/nds_miyoo/releases/download/assets/toolchain.tar.gz
RUN cd && tar xvf toolchain.tar.gz
RUN cd && mv mmiyoo /opt
RUN cd && mv prebuilt /opt
RUN export PATH=/opt/mmiyoo/bin/:$PATH
