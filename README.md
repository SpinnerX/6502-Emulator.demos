# 6502 Emulator Demos (Early Prototypes)


## Overview
This repository will have folders containing demos, and any prototypes related to the topics of \
folders they are located in. Demos and Protype are to demonstrate ideas that will be considered using \
for the 6502 emulators renderer. Including notes, ideas, and considerations that will be part of core use of the \
renderer. Whole point of this repository is to keep track of ideas, features part of the renderer that'll be utilized \
through the core applications. Some things may involve parallel processing in sending data from one application to the \
other. In this repository, I will also be listing in an orderly fashion of how I am also going to be prioritizing tasks, \
and features regarding the renderer (and the emulator).

## One Thing I'd like to Note
Goal of the renderer is to utilize the Opengl, glew, glut, and freeglut frameworks. This way we have full control of how we may \
want things to render. Including having our own implementations of certain applications. Giving us that flexibility for the time being \
and to allow us figure some graphhics optimization (if any discovered, may be in their own directories part of this repository).

## NOTE (To self, and the viewers)
For right now, since there are quite a lot to do still, this repo will will remain, until we get to a point where issues start \
being a thing. Meaning that since, the 6502 Emulator is in still the early phase, with much to do. There are considerable amount of time \
needed to look at how the 6502 works, from hardware working with software. Including handling external devices connections, and etc.





# Plan  (Goal for the renderer currently)

## 1. Entry Point
Entry point is the starting phase of implementing the renderer using OpenGL, glfw, etc. Where I \
implement utilize (for right now), the renderer to have an immediate tools and interface for helping \
with debugging and checking if data are being modified, etc. Also marks the starting point of the \
renderers development.

    1.1. Displaying memory viewer on window
        - What this means is that, when we open up the renderer, we should first
        be able to display the memory viewer.
        - Verifying Memory Viewer works.
        - Do more testing and debugging on interacting with the memory viewer and seeing
            if data changes in real-time (this is once it works).
        - Start to integrate basic thread-safety and parallel processing systems into the renderer. (For sending data continously)
    1.2. Sendind data (entry point)
        - Once verified the memory viewer can be displayed, and UI interaction to the user does not lag as much
            then we can look into parallel computing and threading.
        - Distributed systems, and parallel computing applications.
        - The reason for this, is I am thinking what if we have multiple windows (For now, lets say two).
        - How are we going to manage the two windows? While still
            considering that they may be sending and receiving data continously.
        -  This is where we may have to look into parallel computing for
            references. (though this is a rough draft, so this may change later on)


# This is what I am thinking for now, going to be adding more as I think more about this...
