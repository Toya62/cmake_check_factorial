FROM gitlab/gitlab-runner:latest

RUN apt-get update && \
	apt-get install -y --no-install-recommends make cmake g++

# Copy your project's source code into the image
COPY . /cmake_check	
WORKDIR /cmake_check

# Build and test the project
RUN mkdir build && \
    cd build && \
    cmake .. && \
    make && \
    ctest --output-on-failure