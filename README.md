![Banner](https://github.com/GDSC-SGGSCC/Hacktoberfest-22/blob/main/banner.png)
# **Hacktoberfest-22' Hello World!** [![Tweet](https://img.shields.io/twitter/url/http/shields.io.svg?style=social)](https://twitter.com/intent/tweet?text=Kickstart%20your%20Hactoberfest'22%20with%20this%20great%20repository&url=https://github.com/GDSC-SGGSCC/Hacktoberfest-22&via=gdsc_sggscc&hashtags=hacktoberfest,opensource,programming,hactoberfest2022)

Kickstart your Hacktoberfest and Make your first PR! ~ A beginner friendly repository made specifically for open source beginners. Add a 'Hello World' program under any language. Just make sure you add the program under the correct language directory. Happy coding!!

# **What is Hacktoberfest??**
Hacktoberfest is digitalocean’s annual event that encourages people to contribute to open source throughout october. Much of modern tech infrastructure—including some of digitalocean’s own products—relies on open-source projects built and maintained by passionate people who often don’t have the staff or budgets to do much more than keep the project alive. Hacktoberfest is all about giving back to those projects, sharpening skills, and celebrating all things open source, especially the people that make open source so special.

Hacktoberfest is for everyone. Whether it’s your first time—or your ninth—it’s almost time to hack out four pristine pull/merge requests and complete your mission for open source.

- Register anytime between September 26 and October 31.

- Pull requests can be made in any GITHUB or GITLAB hosted project that’s participating in Hacktoberfest (look for the “hacktoberfest” topic)

- Project maintainers must accept your pull/merge requests for them to count toward your total.

- Have 4 pull/merge requests accepted between October 1 and October 31 to complete Hacktoberfest.

- The first 40,000 participants (maintainers and contributors) who complete Hacktoberfest can elect to receive one of two prizes: a tree planted in their name, or the Hacktoberfest 2022 t-shirt.
<br> <br>

<img src="/logo.png" alt="logo" width="300"/>
<br> <br>

# **Steps to Follow!!**

### **1. Register for Hacktoberfest**
Follow the link and authorize with either Github or Gitlab to participate in Hacktoberfest! <br>
https://hacktoberfest.com/auth/

### **2. Fork the Repository**
Create your own copy or "Fork" of this repository to make changes and contribute. To fork the repository, click the Fork button on top.
![Fork](https://github.com/GDSC-SGGSCC/Hacktoberfest-22/blob/main/fork.png)

### **3. Add a 'Hello World' Program**
Once you have forked the repository, add a 'Hello World' program in any Programming Language ( make sure to not repeat the program for an existing language in the repository ) to a folder with it's name as the programming language to the main branch. If there is no language folder, make one and then add into it.

### **4. First Contribution!**
Once you have completed these steps, you can make your first contributon to this repository by creating a PR ( more on this below ).

### **5. Give the repository a :star:**
If you liked this project and got to learn something new, give the repository a star to motivate us and share the repository as much as you can!


# **How to Contribute?**
To contribute to this project and other open-source projects, you need to have knowledge of Git and Github/ Gitlab.
You need to have Git installed on your system. To check whether your system has Git installed, run  `git --version`. If you get any version, it means Git is installed on your system otherwise it is not.
To install Git, visit https://git-scm.com/downloads and follow the instructions. <br><br>

To make your own local copy of this repository, open up your terminal/ command-line.

### **1. Clone the Repository**
We'll use the `git clone` command to clone the repository on our local system.
Copy the repository HTTPS URL as shown in the screenshot below: <br> <br>
<!-- ![clone](https://github.com/GDSC-SGGSCC/Hacktoberfest-22/blob/main/clone.png) -->
<img src="/clone.png" alt="logo" width="300"/>
<br>
Then run the following command: `git clone https://github.com/GDSC-SGGSCC/Hacktoberfest-22.git`.

### **2. Make a new branch**
To create your branch, from your terminal window, change your directory so that you are working in the directory of the repository. Be sure to use the actual name of the repository (i.e. Hacktoberfest-22) to change into that directory.

```
cd Hacktoberfest-22
```

Now, we’ll create our new branch with the `git branch` command. Make sure you name it descriptively so that others working on the project understand what you are working on.

```
git branch new-branch
```

Now that our new branch is created, we can switch to make sure that we are working on that branch by using the git checkout command:

```
git checkout new-branch
```

Once you enter the git checkout command, you will receive the following output:

```
Output:
Switched to branch 'new-branch'
```

At this point, you can now modify existing files or add new files to the project on your own branch.

### **3. Make Changes Locally**

Once you have added new files to the project, you can add them to your local repository, which you can do with the `git add` command. Let’s add the `-A` flag to add all changes that we have made:

```
git add -A
```
or
```
git add .
```

Next, we’ll want to record the changes that we made to the repository with the git commit command.

The commit message is an important aspect of your code contribution; it helps the other contributors fully understand the change you have made, why you made it, and how significant it is. Additionally, commit messages provide a historical record of the changes for the project at large, helping future contributors along the way.

If you have a very short message, you can record that with the `-m` flag and the message in quotes:

Example:

```
git commit -m "Updated Readme.md"
```

At this point you can use the `git push` command to push the changes to the current branch of your forked repository:

Example:

```
git push --set-upstream origin new-branch
```

### **4. Update Local Repository**

While you are working on a project alongside other contributors, it is important for you to keep your local repository up-to-date with the project as you don’t want to make a pull request for code that will cause conflicts. To keep your local copy of the code base updated, you’ll need to sync changes.

We’ll first go over configuring a remote for the fork, then syncing the fork.

### **5. Configure a Remote for the Fork**

Next, you’ll have to specify a new remote upstream repository for us to sync with the fork. This will be the original repository that you forked from. You’ll have to do this with the  `git remote add`  command.

```
git remote add upstream https://github.com/GDSC-SGGSCC/Hacktoberfest-22.git
```

In this example, `upstream` is the shortname we have supplied for the remote repository since in terms of Git, “upstream” refers to the repository that you cloned from. If you want to add a remote pointer to the repository of a collaborator, you may want to provide that collaborator’s username or a shortened nickname for the shortname.

### **6. Sync the Fork**

Once you have configured a remote that references the upstream and original repository on GitHub, you are ready to sync your fork of the repository to keep it up-to-date.

To sync your fork, from the directory of your local repository in a terminal window, you’ll have to use the `git fetch` command to fetch the branches along with their respective commits from the upstream repository. Since you used the shortname “upstream” to refer to the upstream repository, you’ll have to pass that to the command:

```
git fetch upstream
```

Switch to the local master branch of our repository:

```
git checkout master
```

You’ll now have to merge any changes that were made in the original repository’s master branch, that you will access through your local upstream/master branch, with your local master branch:

```
git merge upstream/master
```

### **7. Create Pull Request**

At this point, you are ready to make a pull request to the original repository.

You should navigate to your forked repository, click on the Contribute button and Open a new PR ( Pull Request ).
<!-- ![pr](https://github.com/GDSC-SGGSCC/Hacktoberfest-22/blob/main/pr.png) -->
<img src="/pr.png" alt="logo" width="300"/>

<br>

# **Author**

**Priyanshu Singh** - **[reveurguy](https://github.com/reveurguy)**

See also the list of **[contributors](https://github.com/GDSC-SGGSCC/Hacktoberfest-22/graphs/contributors)** who participated in this project.


> **Great Work!!! You just contributed to an open-source project and learnt to use Git and Github.** <br>
> **You also got a step closer to complete Hacktoberfest Challenge.** <br>
> **Look for more projects with the "hacktoberfest" label to complete Hacktoberfest'22 and keep contributing to open-source!!!**
