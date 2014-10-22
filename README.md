ethanifier
==========

### Create a messaging app that allows anyone to message you

A few weeks ago, I stumbled across [Ethan](http://www.textethan.com/) on ProductHunt. It's a clever app by Ethan Gliechtenstein that has one simple function: it lets you message the author.

The concept was so interesting, I thought it'd be fun to open source a project that makes use of the powerful and free [SupportKit](http://www.supportkit.io) platform for in-app messaging to implement your very own Ethan-style app.

### How to

Start by cloning the repository (might be a good idea to fork it first)

```
$ git clone https://github.com/gozman/ethanifier.git
$ cd ethanifier
$ open Ethanifier.xcworkspace
```

Sign up for a free app token on [SupportKit.io](https://app.supportkit.io)

Copy and paste the app token into the AppDelegate.m file in the Ethanifier project. You'll want to replace the string that says "YOUR-APP-TOKEN" with your own token.

Once you've added in your app token, you'll be good to go. Users of your app will be able to send you text messages. These messages will show up in your inbox as e-mail. Your replies will automatically be transformed into messages in the app.

### Adding push notifications and more features

Take a look at the [SupportKit docs](http://docs.supportkit.io) to learn more about the library I used to implement the messaging functionality. It contains many more features that are really handy for any app you might be working on.

### Need help?
Having trouble with Ethanifier? Reach out to me on twitter @gozmike

