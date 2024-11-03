# DONE VS Code Extension

Get DONE faster with official DONE support in Visual Studio Code! 🚀

## Features ✨

- Syntax highlighting for the `DONE` keyword
- `.done` file recognition
- Line comment support with `#`
- Auto-closing brackets
- The satisfaction of seeing DONE in beautiful colors

![Syntax Highlighting Demo](https://via.placeholder.com/800x400.png?text=DONE+Syntax+Highlighting)

## Installation 📦

### From VS Code Marketplace
1. Open VS Code
2. Go to Extensions (Ctrl+Shift+X)
3. Search for "DONE"
4. Click Install
5. You're DONE!

### Manual Installation
1. Clone this repository:
```bash
cd DONE/vscode
npm install
npm run package
```
2. Copy the generated `.vsix` file
3. In VS Code, go to Extensions
4. Click the '...' menu
5. Select 'Install from VSIX...'
6. Choose the generated file
7. You're DONE!

## Usage 🔨

1. Create a new file with `.done` extension
2. Start writing DONE
3. Watch the magic happen!

### Example:
```plaintext
# This is a comment
DONE DONE        # Counter increment
DONE DONE DONE DONE  # Hello World!
```

## Features in Detail 🔍

### Syntax Highlighting
- `DONE` keywords are highlighted in a distinct color
- Comments are properly styled
- Different colors for different DONE contexts

### Language Configuration
- Line comments with `#`
- Bracket auto-closing for `()`, `[]`, and `{}`
- Smart indentation

## Development 🛠️

Want to contribute to the extension? Here's how:

1. Clone the repository:
```bash
git clone https://github.com/yourusername/DONE
cd DONE/vscode
```

2. Install dependencies:
```bash
npm install
```

3. Make your changes

4. Test the extension:
- Press F5 in VS Code to launch a new window with the extension loaded
- Create a new file with a `.done` extension
- Verify your changes

5. Package the extension:
```bash
npm run package
```

## Extension Structure 📁

```
DONE-VSCode/
├── package.json          # Extension manifest
├── README.md            # This file
├── syntaxes/
│   └── DONE.tmLanguage.json    # Syntax highlighting rules
└── language-configuration.json      # Language configuration
```

## Configuration Options ⚙️

Currently, DONE supports these customization options:

```json
{
    "DONE.highlightColor": "#FF0000",
    "DONE.enableComments": true
}
```

## Known Issues 🐛

- Sometimes you might be TOO DONE
- Excessive productivity may occur
- Risk of getting everything DONE too quickly

## Release Notes 📝

### 1.0.0
- Initial release
- Basic syntax highlighting
- Comment support
- Bracket auto-closing

### 1.0.1
- Fixed issue with DONE being too DONE
- Improved DONE detection
- Added more DONE support

## Contributing 🤝

1. Fork it
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some DONE'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Requirements 📋

- VS Code 1.50.0 or higher
- A strong desire to get things DONE

## Extension Settings ⚡

This extension contributes the following settings:

* `DONE.enable`: Enable/disable DONE support
* `DONE.enableSyntaxHighlighting`: Enable/disable syntax highlighting

## For More Information 📚

* [DONE Repository](https://github.com/yourusername/DONE)
* [Issue Tracker](https://github.com/yourusername/DONE/issues)
* [VS Code Extension Development](https://code.visualstudio.com/api)

## License 📄

This extension is licensed under the DONE License - see the [LICENSE](../LICENSE) file for details.

---

**Enjoy getting DONE with DONE!** 🎉