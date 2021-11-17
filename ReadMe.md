# Introduction

This is a convinient ROS pakcage for getting formated date-time strings after C++11 but before C++20.

Tested on Ubuntu 20.04 with ROS Noetic.

# Dependencies

This package depends on [date][date_github], an open-source time zone implementation. You need to install [date][date_github] in your system before using this package. The tested version is v3.0.1.

[date_github]: https://github.com/HowardHinnant/date

[date][date_github] itself depends on curl, so you need curl installed in your system.

To install [date][date_github], use the following CMake sequence.

```bash
cd <date source root>
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DENABLE_DATE_TESTING=ON -DBUILD_TZ_LIB=ON ../
make -j4
make testit
sudo make install
```

# How to use.

Clone this package to your ROS working directory. Add `date_utils` as a dependency in the `package.xml` file. Add the library `date_utils` as a catkin component dependency to your own package's `CMakeLists.txt`.

```makefile
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  date_utils
)
```

Make sure `${catkin_LIBRARIES}` is in the list of `target_link_libraries()` for your own package.


# Who to talk to.

Yaoyu Hu (yaoyuh@andrew.cmu.edu)