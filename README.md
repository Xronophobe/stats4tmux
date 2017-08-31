# stats4tmux
Some stats of my Linux system I would like to display on Tmux Statusbar while practicing C++

I started this project because my [battchrg.sh](https://github.com/Xronophobe/battchrg) script only supports Mac OS, and also very slow.
This project will display the same battery information in a command line friendly format, among many other features.

TODO:

 * [ ] add actual readme
 * [X] setup GTest
 * [ ] add argument parsing with [<boost/program_options>](http://www.boost.org/doc/libs/1_65_0/doc/html/program_options.html)
   - [ ] build program_options see how: [build custom binaries](http://www.boost.org/doc/libs/1_65_0/more/getting_started/unix-variants.html#or-build-custom-binaries) (program_options is one of the few Boost libraries that [has to be built separately](http://www.boost.org/doc/libs/1_65_0/more/getting_started/unix-variants.html#header-only-libraries))
   - [ ] add battery capacity, and battery status options
 * [x] implement single-digit display mode for values in range 0-100
 * [ ] wifi status
