The minimum requirements to build Warzone are System 10.5, Xcode 3.1 and the Qt 4.6 moc.

If you do not have Xcode 3.1 you can get it for free at Apple's website.
http://developer.apple.com/technology/xcode.html
You will need a free ADC Membership to download Xcode.

If you do not the Qt 4.6 moc you can get it at the Qt website.
http://qt.nokia.com/downloads/qt-for-open-source-cpp-development-on-mac-os-x

This directory contains support files for the Mac OS X port of Warzone 2100.
Since April, 2007, The Mac OS X port has been built using an Xcode project
that automatically downloads and builds all necessary external libraries.
Also, since that time, the Mac OS X port has produced a universal binary
and has required Mac OS X 10.4 "Tiger" to run.

To build the game, just run the following command:
  xcodebuild -project Warzone.xcodeproj -target Warzone -configuration Release

There are two build configurations available.  'Release' is compiled
normally, while 'Debug' sets the DEBUG preprocessor flag and automatically
sets the game's debugging options to the equivalent of --debug all when
launched, unless overwritten with a --debug command-line option.  The
debugging output can be viewed with Console.app.

