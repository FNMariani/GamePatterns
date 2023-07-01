# Game Patterns in Unreal

Small project where different design patterns for videogames are applied. Trying to use some examples where possible.

## Command

Actions that can be created and implemented using both blueprint and C++.
For example, a primary action such as attacking or actions such as running, jumping or dashing, etc.

## Flyweight

With the use of data assets (UDataAsset) we can share information between different instances.

## Observer

Event or messaging system using delegates in both blueprint and C++.

## Prototype

Use of a class as a prototype for the creation of an instance. Clone function.

## Singleton

Single instance and accessible from anywhere. The GameInstance class is a good example.

## State

The Unreal animation system relies on a state machine system to handle the different behaviors of the animations.

## Double Buffer

Example of creating an outline material using Custom Depth Buffer.

## Game Loop

In the example we can see the total time since the game starts and the fps.

## Update Method

The Tick function within the Unreal classes corresponds to the Update Method pattern.

## Bytecode

In the example you can run code in Lua.

## Subclass Sandbox

A subclass chooses which functions it inherits from a big base class with different features.

## Type Object

A class can flexibly obtain attributes based on information contained in a class or data asset.

## Component

Unreal actor components corresponds to Component pattern.

## Event Queue

Example with different types of delegates.

## Service Locator

Provides global access to different services. In the example an audio manager.

## Data Locality

Example with data assets and data tables.

## Dirty Flag

Example with resolution changes and fullscreen mode.

## Object Pool

Example of an object pool of actors representing bullets. In blueprint.

## Spatial Partition

Unreal's new world partition system corresponds to the Spatial Partition pattern.