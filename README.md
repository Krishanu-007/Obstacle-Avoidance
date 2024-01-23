# My Obstacle Avoidance Car Project

## Overview

This repository contains the source code and documentation for my obstacle avoidance car project.



## Table of Contents

1. [Introduction](#introduction)
2. [Setup](#setup)
   - [Hardware Requirements](#hardware-requirements)
   - [Software Requirements](#software-requirements)
   - [Installation](#installation)
3. [Usage](#usage)
   - [Running the Car](#running-the-car)
   - [Customization](#customization)
4. [Contributing](#contributing)
   - [Bug Reports](#bug-reports)
   - [Feature Requests](#feature-requests)
   - [Pull Requests](#pull-requests)
5. [License](#license)

# Introduction

Welcome to the My Obstacle Avoidance Car project! This project aims to create an autonomous car capable of navigating its environment and avoiding obstacles using a set of sensors. Whether you are a robotics enthusiast, a hobbyist, or a developer interested in autonomous systems, this project provides a hands-on experience in building and customizing an obstacle avoidance car. The project has been done on a very minimalistic way such that it stays beginner friendly.

## Key Features

- Autonomous navigation: The car is designed to operate without direct human control, making decisions based on sensor input and taking its own decisions.
- Obstacle avoidance: The detection of obstacle is mainly done on the basis of Ultrasonic sensor.
- Customizable: The project is open-source and encourages users to customize the code, add new features, or experiment with different sensors and configurations.

## Project Goals

Our primary goals for this project include:

1. Creating a reliable obstacle detection and avoidance system.
2. Providing a user-friendly interface for customization and configuration.
3. Building a project that caters as the starting of hardware programming to the beginners.

## Getting Started

To get started with the project, check out the [Setup](#setup) section for information on hardware requirements, software installation, and configuration.

# Setup

Setting up the obstacle avoidance car involves configuring both the hardware and software components. Follow the steps below to ensure a smooth setup process.

## Hardware Requirements

Before you begin, make sure you have the following hardware components:

- **Microcontroller:** I have used Arduino Uno Rev 3 (you can use the cheaper version clone vesion, no effect on processing)
- **Motors:** 2 3V Hobby Motors, 1 SG-90 Servo Motor, , AdaFruit L293D Motor Driver Shield
- **Sensors:** Ultrasonic Sensor
- **Chassis:** I have not used any dedicated chassis rather created it with simple cardboard
- **Power Supply:** 2* 18650 Li Batteries 3.7V 2000mAh

## Software Requirements

Ensure you have the necessary software installed on your development machine:

- **Arduino IDE:** https://www.arduino.cc/en/software
- **Any additional dependencies or libraries:** <AFMotor.h> , <Servo.h>

## Installation

Follow these steps to set up the obstacle avoidance car:

1. **Clone the Repository:**
  ```bash
   git clone https://github.com/Krishanu-007/Obstacle-Avoidance.git
  cd Obstacle-Avoidance
```
   # Usage

The obstacle avoidance car is ready to use once you have successfully set up the hardware and installed the required software. This section provides instructions on how to run the car in autonomous mode and outlines customization options.

## Running the Car

To start the obstacle avoidance car in autonomous mode, follow these steps:

1. **Power On:**
   - Ensure that the obstacle avoidance car is powered on.

2. **Place in an Open Area:**
   - Position the car in an open area with enough space for it to navigate.

3. **Start the Program:**
   - Upload the code and disconnect the usb cable from the arduino and connect the external power supply to the shield and connect the jumper on the shield

4. **Observe Autonomous Navigation:**
   - The car should now navigate autonomously, detecting obstacles and adjusting its path accordingly.

## Customization

The obstacle avoidance car project is designed to be customizable. Here are some ways you can tailor the project to your preferences:

### Configuring Parameters

Adjust parameters in the configuration files to customize the behavior of the car. These may include:

- **Sensor sensitivity:** Modify the sensitivity of obstacle detection sensors.
- **Movement parameters:** Tune parameters related to the car's speed, turning radius, etc.

### Adding Features

Explore opportunities to enhance the project by adding new features, such as:

- **Additional sensors:** Integrate new types of sensors for improved obstacle detection.
- **LED indicators:** Add visual indicators to signal different states of the car.

### Experimenting with Hardware

Feel free to experiment with different hardware configurations:

- **Upgrading motors:** Swap out motors for higher torque or speed.
- **Enhancing power supply:** Upgrade the power supply for improved performance.

## Next Steps

Congratulations! You have successfully run the obstacle avoidance car in autonomous mode. If you want to contribute or explore advanced features, head over to the [Contributing](#contributing) section for guidelines.

# Contributing

We welcome contributions from the community to enhance and improve the obstacle avoidance car project. Whether you're a developer, hobbyist, or enthusiast, your input is valuable. This section outlines ways to contribute, report issues, and submit enhancements.

## Bug Reports

If you encounter any bugs or unexpected behavior, please help us by reporting it. Follow these steps:

1. **Check Existing Issues:**
   - Before reporting a new issue, check the [existing issues](https://github.com/Krishanu-007/Obstacle-Avoidance/issues) to see if the problem has already been reported.

2. **Create a New Issue:**
   - If the issue is not already reported, [create a new issue](https://github.com/Krishanu-007/Obstacle-Avoidance/issues/new).
   - Clearly describe the problem, including steps to reproduce it.

3. **Provide Additional Information:**
   - Include information about your hardware setup, software versions, and any error messages.

## Feature Requests

If you have ideas for new features or improvements, we encourage you to submit a feature request. Follow these steps:

1. **Check Existing Requests:**
   - Check the [existing feature requests](https://github.com/Krishanu-007/Obstacle-Avoidance/issues?q=is%3Aopen+is%3Aissue+label%3A%22feature+request%22) to avoid duplicates.

2. **Create a New Request:**
   - If your idea is not already suggested, [create a new feature request](https://github.com/Krishanu-007/Obstacle-Avoidance/issues/new).
   - Provide a detailed description of the proposed feature and its benefits.

## Pull Requests

We appreciate contributions in the form of pull requests. Follow these steps to submit a pull request:

1. **Fork the Repository:**
   - [Fork the repository](https://github.com/Krishanu-007/Obstacle-Avoidance/fork) to your GitHub account.

2. **Clone Your Fork:**
   - Clone your fork to your local machine:
     ```bash
     git clone https://github.com/Krishanu-007/Obstacle-Avoidance.git
     cd Obstacle-Avoidance
     ```

3. **Create a New Branch:**
   - Create a new branch for your changes:
     ```bash
     git checkout -b feature-name
     ```

4. **Make Changes:**
   - Implement your changes and test them thoroughly.

5. **Commit Changes:**
   - Commit your changes with clear, concise commit messages:
     ```bash
     git add .
     git commit -m "Add feature-name"
     ```

6. **Push Changes:**
   - Push your changes to your fork:
     ```bash
     git push origin feature-name
     ```

7. **Submit Pull Request:**
   - [Submit a pull request](https://github.com/Krishanu-007/Obstacle-Avoidance/compare) from your branch to the main repository.
   - Provide a detailed description of your changes.

I appreciate your contributions and look forward to making the obstacle avoidance car project even better together!

# License

The obstacle avoidance car project is licensed under the [MIT License](./LICENSE).

## MIT License
