FROM debian

RUN apt-get update
RUN apt-get install build-essential make cmake wget autogen autoconf automake -y

RUN cd && wget https://github.com/steward-fu/website/releases/download/miyoo-mini/mini_toolchain-v1.0.tar.gz
RUN cd && tar xvf mini_toolchain-v1.0.tar.gz
RUN cd && mv mini /opt
RUN cd && mv prebuilt /opt

RUN cd && wget https://github.com/steward-fu/website/releases/download/miyoo-flip/flip-toolchain-v1.0.tar.gz
RUN cd && tar xvf flip-toolchain-v1.0.tar.gz
RUN cd && mv flip /opt

RUN cd && wget https://github.com/steward-fu/website/releases/download/trimui-brick/brick-toolchain.tar.gz
RUN cd && tar xvf brick-toolchain.tar.gz
RUN cd && mv brick /opt
